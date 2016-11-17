#include<stdio.h>
int adder(int,int);
void main()
{  int a, b, s;
   printf("Enter 2 numbers :\n");
   scanf ("%d%d",&a,&b);
   printf("calling the function\n");
   s = adder(a,b);
   printf("sum = %d\n", s);
}
adder(v1,v2)
{  printf("These are the inputs : %d %d \n", v1, v2);
   printf("leaving function and returning value \n");
   return v1+v2;
}
