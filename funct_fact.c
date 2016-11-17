#include<stdio.h>
int fact(int p)
{  int k, f=1;
   for(k=2;k<=p;k++)
     f=f*k;
   return f;
}
void main()
{  int a, out;
   printf("Enter the number you want to find the factorial of :\n");
   scanf("%d",&a);
   out=fact(a);
   printf("Factorial is %d\n",out);
}
