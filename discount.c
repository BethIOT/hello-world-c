// Need to verify
#include<stdio.h>
void disc(float t, int d)
{  float totn, discn;
   discn=t*d/100;
   totn=t-discn;
   printf("Sub-total %lf \n",totn);
}
void main()
{  int qnt;
   float price, tot;
   printf("Enter no(items) bought :\n");
   scanf ("%d", &qnt);
   printf("Enter rate:\n");
   scanf ("%f", &price);
   tot=qnt*price;
   printf("Total = %lf\n", tot);
   if(tot>=1000)
      disc(tot,15);
   else
      disc(tot,10);
}
   
