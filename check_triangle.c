#include<stdio.h>
void main()
{  int a, b, c;
   float sum;
   printf("Enter the 3 sides of the proposed triangle :\n");
   printf("a");
   scanf ("%d", &a);
   printf("b");
   scanf ("%d", &b);
   printf("c");
   scanf ("%d", &c);
   sum=a+b+c;
   sum/=2;
   printf("parameter = %lf\n",sum);
   if(a<sum && b<sum && c<sum)
      printf("Go and make the triangle\n");
   else
      printf("Mesurments are not feasable\n");
}      
