#include<stdio.h>
void main()
{  int a, b, *p, *q;
   p=&a;
   q=&b;
   printf("Enter 2 numbers: \n");
   scanf(" %d %d",p,q);
   if((*p)%2==0)
      printf("The first number is even\n");
   else
      printf("The first number is odd\n");
   if((*q)%2==0)
      printf("The second number is even\n");
   else
      printf("The second number is odd\n");
   printf("Their sum is %d\n", *p+*q);
   printf("Their difference is %d\n", *p-*q);
   printf("Their product is %d\n", (*p)*(*q));   
   printf("Their quotient is %d\n", (*p)/(*q));
}
