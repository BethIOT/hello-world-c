// Type casting is done in hexadecimal conversions. 
#include<stdio.h>
void main()
{  int a[21]={0}, num, i, k, h, sz;
   char ch, hex[8]={'0','0','0','0','0','0','0','0'};
   printf("To convert dec to bin, type '1'\n");
   printf("To convert bin to dec, type '2'\n");
   printf("To convert dec to hex, type '3'\n");
   printf("To convert hex to dec, type '4'\n");
   scanf("%c",&ch);
   switch(ch)
   {  case '1' : printf("Enter the decimal no.");
                 scanf("%d",&num);
                 for(i=20;;i--)
                 {  a[i]=num%2;
                    num=num/2;
                    if (num==0)
                       break;
                 }
                 printf("binary no is ");
                 for(i=0;i<20;i++)
                    printf("%d",a[i]);
                 break;
      case '2' : printf("Enter the binary no.\n");
                 for(i=20;a[i+1]<2;i--)
                 {  printf("binary at %d ",(20-i));
                    scanf("%d",&a[i]);
                 }
                 a[i+1]=0;
                 sz=i+1;
                 printf("binary no is ");
                 for(i=0;i<21;i++)
                    printf("%d",a[i]);
                 num=0;
                 k=1;
                 printf("limit = %d\n",sz);
                 for(i=20;i>sz;i--)
                 {  num+=(a[i]*k);
                    k*=2;
                 }
                 printf("The decimal no is %d", num);
                 break;
      case '3' : printf("Enter the decimal no.\n");
                 scanf("%d",&num);
                 for(i=7;;i--)
                 {  h=num%16;                    
                    if(h==10)
                       hex[i]='A';
                    else if(h==11)
                       hex[i]='B';
                    else if(h==12)
                       hex[i]='C';
                    else if(h==13)
                       hex[i]='D';
                    else if(h==14)
                       hex[i]='E';
                    else if(h==15)
                       hex[i]='F';
                    else
                       hex[i]=(char)(48+h);// Type casting offset is +48
                    num=num/16;
                    if (num==0)
                       break;
                 }
                 printf("The hexadecimal number is : ");
                 for(i=0;i<8;i++)
                    printf("%c", hex[i]);
                 break;
      case '4' : printf("Enter the hexadecimal no.\n");
                 i=8;
                 do
                 {  i--;
                    printf("hex at %d ",(7-i));
                    scanf(" %c",&hex[i]);
                 }while(hex[i]>='0'&&hex[i]<='F'&&i>=0);
                 hex[i]=0;
                 sz=i;
                 printf("hex no is ");
                 for(i=0;i<8;i++)
                    printf("%c",hex[i]);
                 num=0;
                 k=1;
                 printf("limit = %d\n",sz);
                 for(i=7;i>sz;i--)
                 {  if(hex[i]=='A')
                       h=10;
                    else if(hex[i]=='B')
                       h=11;
                    else if(hex[i]=='C')
                       h=12;
                    else if(hex[i]=='D')
                       h=13;
                    else if(hex[i]=='E')
                       h=14;
                    else if(hex[i]=='F')
                       h=15;
                    else
                       h=((int)hex[i])-48; // Type casting offset is -48
                    printf("h is %d\n",h);
                    num+=(h*k);
                    k*=16;
                 }
                 printf("The decimal no is %d", num);
                 break;
      default : printf("Not a valid option");
                break;
   }
   printf("\n");
}
                    
