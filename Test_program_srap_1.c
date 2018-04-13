// PLEASE * DO * NOT * RUN * THIS * PROGRAM ******** 

#include <DistanceGP2Y0A21YK.h>
//motor A connected between A01 and A02
//motor B connected between B01 and B02

//Motor A
int PWMA = 3; //Speed control
int AIN1 = 9; //Direction
int AIN2 = 8; //Direction

//Motor B
int PWMB = 5; //Speed control
int BIN1 = 11; //Direction
int BIN2 = 12; //Direction

//sensor
int SENs1 = 2;//front
int SENs2 = 3; //back
int SENb = 4;  //side

DistanceGP2Y0A21YK Dist_s1;
DistanceGP2Y0A21YK Dist_s2;
DistanceGP2Y0A21YK Dist_b;


void setup()
{
  Serial.begin(9600);
  Serial.println("Setup...");

  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  
  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  
  Dist_s1.begin(A2);
  Dist_s2.begin(A3);
  Dist_b.begin(A4);
}

int sensor_small_1()
{  int val;
   val = Dist_s1.getDistanceVolt();
   Serial.println("reading from sensor s1");
   Serial.print(val);
   return val; 
}
int sensor_small_2()
{  int val;
   val = Dist_s2.getDistanceVolt();
   Serial.println("reading from sensor s2");
   Serial.print(val);
   return val; 
}

int sensor_big()
{  int val;
   val = Dist_b.getDistanceVolt();
   Serial.print("reading from sensor b");
   return val; 
}

void stop_it()
{   Serial.print("stoping");
    digitalWrite(BIN1,LOW);
    digitalWrite(BIN2,LOW);
    digitalWrite(AIN1,LOW);
    digitalWrite(AIN2,LOW);
}

void move_it(int direction1, int motion1, int speed1)
{   //drtn: 1 is left, 2 is right
    //motn: 1 is frwd, 2 is back
    int case_no = motion1+(2*direction1);
    switch(case_no)
    {   case 1  :   digitalWrite(BIN1,LOW);
                    digitalWrite(BIN2,HIGH);
                    analogWrite(PWMB,speed1);
                    Serial.println("fwd");
                    break;
        case 2  :   digitalWrite(BIN1,HIGH);
                    digitalWrite(BIN2,LOW);
                    analogWrite(PWMB,speed1);
                    Serial.println("back");
                    break;
        case 3  :   digitalWrite(AIN1, LOW);
                    digitalWrite(AIN2, HIGH);
                    digitalWrite(BIN1, LOW);
                    digitalWrite(BIN2, HIGH);
                    analogWrite(PWMB, speed1);
                    analogWrite(PWMA, 64);
                    Serial.println("left fwd ");
                    break;
        case 5  :   digitalWrite(AIN1, HIGH);
                    digitalWrite(AIN2, LOW);
                    digitalWrite(BIN1, LOW);
                    digitalWrite(BIN2, HIGH);
                    analogWrite(PWMB, speed1);
                    analogWrite(PWMA, 64);
                    Serial.println("right fwd ");                      
                    break;
        case 4  :   digitalWrite(AIN1, LOW);
                    digitalWrite(AIN2, HIGH);
                    digitalWrite(BIN1, HIGH);
                    digitalWrite(BIN2, LOW);
                    analogWrite(PWMB, speed1);
                    analogWrite(PWMA, 64);
                    Serial.println("left back ");                      
                    break;
        case 6  :   digitalWrite(AIN1, HIGH);
                    digitalWrite(AIN2, LOW);
                    digitalWrite(BIN1, HIGH);
                    digitalWrite(BIN2, LOW);
                    analogWrite(PWMB, speed1);
                    analogWrite(PWMA, 64);
                    Serial.println("right back ");                      
                    break;
    }        
}

void park_it()
{   int s1, s2;
    Serial.println("car goes ");
    move_it(2,1,110);
    delay(900);
    Serial.println("car goes ");
    move_it(1,2,110);
    delay(900);
    s1 = sensor_small_1();
    while(s1<3300)
    {   s1 = sensor_small_1();
        Serial.println("car goes ");
        move_it(2,2,110);
        delay(1900);
    }
    s2 = sensor_small_2();
    while(s2<3300)
    {   s2 = sensor_small_2(); 
        Serial.println("car goes ");
        move_it(1,1,110);
        delay(900);
    }
}

int park_valid=0;

void loop()
{ int count, s3;
  while(park_valid==0)
  {  Serial.print("car goes ");
     move_it(0,1,100);  
     s3 = sensor_big();
     Serial.println(s3);
     if ( s3<=1800 )
     {  Serial.print("start detection");
        delay(525);
        s3 = sensor_big();
        Serial.println(s3);        
        if ( s3<=1800 )
        {  stop_it();
           Serial.println("parking space detected");
           delay(200);
           park_it();
           park_valid=1;
        }
        else
           Serial.print("not enough length");
     }
  }
}
