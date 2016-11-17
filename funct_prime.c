#include<stdio.h>
int prime(int n)
{  int i=2, flag=0;
   for(;i<n;i++)
      if(n%i==0)
      {  printf("This is composite.\n");
         flag=1;
         break;
      }
   return flag;
}
void main()
{  int s, r;
   printf("To check if a number is prime or composite.\n");
   printf("Enter a number:");
   scanf ("%d",&s);
   r=prime(s);
   if(r==0)
      printf("This is prime\n");
}
