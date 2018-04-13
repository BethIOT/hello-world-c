

//Arduino Thermal Camera
#include <i2cmaster.h>
#include <Servo.h>

Servo mvert;
Servo mhorz;

// Pins: 7=sonar; 4&5=ir sensor; 8=vert servo; 9=horz servo
//
//
//
const int pwPin = 7;
const int dev = 0x5A<<1;

long count = 0;

///Servo Ranges
int home_p = 0;
int j_done = 0;
int even = 0;
int xskip = 1;
int yskip = 1;
int xstart = 60;
int xstop = 75;
int ystart = 80;
int ystop = 70;

const int xnum = abs(xstart-xstop)+1;
const int ynum = abs(ystart-ystop)+1;

double therm[16][11];
double acous[16][11];

void setup()
{	//sonar pin
	pinMode(pwPin, INPUT);

	//Servo pins
	mvert.attach(8);
	mhorz.attach(9);

	//Home position servos
	mvert.write(xstart); //1485
	mhorz.write(ystart);  //1530

	Serial.begin(9600);
	Serial.println("Setup...");

	i2c_init(); //Initialise the i2c bus
	PORTC = (1 << PORTC4) | (1 << PORTC5);//enable pullups
}

void loop()
{	int i,j,jt;
	int hpos,vpos,hpos2,vpos2;
	double tempData1 = 0x0000; // zero out the data
	double sonrData1 = 0x0000;
	
	if(Serial.available())
	{	if(home_p == 0)
		{	i = 0;
			Serial.flush();
			Serial.println("Sweeping Viewing Space");
			//Serial.println("Enter 1 to confirm space");
			mvert.write(ystart);
			mhorz.write(xstart);
			delay(30);
			do
			{	//This will sweep through window of view
				for(int hpos=xstart;hpos<=xstop;hpos++)
				{	mvert.write(ystart);
					mhorz.write(hpos);
					delay(20);
				}
				for(int vpos=ystart;vpos>=ystop;vpos--)
				{	mvert.write(vpos);
					mhorz.write(xstop);
					delay(20);
				}
				for(int hpos=xstop;hpos>=xstart;hpos--)
				{	mvert.write(ystop);
					mhorz.write(hpos);
					delay(20);
				}
				for(int vpos=ystop;vpos<=ystart;vpos++)
				{	mvert.write(vpos);
					mhorz.write(xstart);
					delay(20);
				}
				i=Serial.read();
			}while (i<=0);
			Serial.println("Starting Calculation");
			home_p=1;
		}
		if(j_done == 0)
		{	for(int i=ystart;i>=ystop;i-=yskip)
			{	for(int j=xstart;j<=xstop;j+=xskip)
				{	if(even == 0)
					{	jt = j;
						mhorz.write(j);
						delay(20);
					}
					else
					{	jt=xstop-(j-xstart);
						mhorz.write(jt);
						delay(20);
					}

					tempData1 = readMLX(1);
					double celcius = tempData1 - 273.15;
					//double fahrenheit = (celcius*1.8) + 32;

					//Serial.print("temp,dist,i,j: ");
					//Serial.print(celcius);
					//Serial.print(", ");
					//Serial.print(cm);
					//Serial.print(", ");
					//Serial.print(ystart-i);
					//Serial.print(", ");
					//Serial.println(xstop-jt);
					//Serial.print("Fahrenheit,inches: ");
					//Serial.println(fahrenheit,inches);
					therm[xstop-jt][ystart-i] = celcius;
					delay(400); // wait a second before printing again
				}
				mvert.write(i);
				delay(20);
				if(even == 0)
					even = 1;
				else
					even = 0;
			}
			//Output data
			Serial.println("Outputting Data");
			for(int j=0;j<ynum;j++)
			{	for(int i=0;i<xnum;i++)
				{	Serial.print(therm[i][j]);
					Serial.print(", ");
				}
				Serial.flush();
				Serial.println(" ");
			}
			j_done = 1;
		}
	}
}

double readMLX(int Tt) 
{	int data_low = 0;
	int data_high = 0;
	int pec = 0;

	i2c_start_wait(dev+I2C_WRITE);
	i2c_write(0x07);

// read
	i2c_rep_start(dev+I2C_READ);
	data_low = i2c_readAck(); //Read 1 byte and then send ack
	data_high = i2c_readAck(); //Read 1 byte and then send ack
	pec = i2c_readNak();
	i2c_stop();

//This converts high and low bytes together and processes temperature, MSB is a error bit and is ignored for temps
	double tempFactor = 0.02; // 0.02 degrees per LSB (measurement resolution of the MLX90614)
	double tempData = 0x0000; // zero out the data
	int frac; // data past the decimal point

// This masks off the error bit of the high byte, then moves it left 8 bits and adds the low byte.
	tempData = (double)(((data_high & 0x007F) << 8) + data_low);
	tempData = (tempData * tempFactor)-0.228;

	return tempData;
}

