#include<stdio.h>
void swap1(int *p, int *q)
{  *p=*p+*q;
   *q=*p-*q;
   *p=*p-*q;
   printf("Swapping inside the function %d %d\n", *p,*q);
}
void swap2(int a, int b)
{  int d;
   d=a;
   a=b;
   b=d;
   printf("Swapping inside the function %d %d\n", a,b);
}
void main()
{  int a, b, *p, *q;
   p=&a;
   q=&b;
   printf("Enter 2 numbers\n");
   scanf(" %d %d",p,q);
   printf("\nThe address is %x or %X\n",p,&a);// can use %X,%x,%u,%p formatters
   printf("The data is %d or %d\n",*p,a);
   printf("The address is %X or %x\n",q,&b);  // can use %X,%x,%u,%p formatters
   printf("The data is %d or %d\n\n",*q,b);
   swap1(&a,&b);
   printf("Back in main fn %d and %d\n", *p, *q);
   swap2(a,b);
   printf("Back in main fn %d and %d\n", *p, *q);
}
   
