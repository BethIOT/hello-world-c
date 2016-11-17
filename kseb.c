#include<stdio.h>
int main()
{  int unt;
   float bill;
   printf("Enter the kWh consumed (Units consumed)");
   scanf ("%d",&unt);
   if (unt<=200)
   {  bill=0.50*unt;
      printf("Total Rs.%lf \n", bill);
      return 0;
   }
   unt=unt-200;
   if (unt<=200)
   {  bill=100+(0.65*unt);
      printf("Total Rs.%lf \n", bill);
      return 0;
   }
   unt=unt-200;
   if (unt<=200)
   {  bill=230+(0.80*unt);
      printf("Total Rs.%lf \n", bill);
   }
   else
   {  unt=unt-200;
      bill=390+unt;
      printf("Total Rs.%lf \n", bill);
   }
   return 0;
}
