// Need to verify
#include<stdio.h>
#include<math.h>
float r1, r2;
int roots(int p, int q, int r)
{  float t;
   t=(q*q)-(4*p*r);
   printf("%lf \n",t);
   if (t>0)
   {  printf("ping1\n");
      r1=((-q)+sqrt(t))/(2*p);
      r2=((-q)-sqrt(t))/(2*p);
      return 0;
   }
   else if(t<0)
   {  printf("ping2\n");
      r1=((-q)+sqrt(-t))/(2*p);
      r2=((-q)-sqrt(-t))/(2*p);
      return 2;
   }
   else
   {  printf("ping3\n");
      r1=(-q)/(2*p);
      r2=(-q)/(2*p);
      return 0;
   }
}
void main()
{  int a, b, c, fl=0;
   printf("Enter the coefficients of quadratic eq a(x^2)+b(x)+c=0 \n");
   printf("a");
   scanf ("%d", &a);
   printf("b");
   scanf ("%d", &b);
   printf("c");
   scanf ("%d", &c);
   fl=roots(a,b,c);
   if (fl==2)
      printf("Roots are %lfi and %lfi \n", r1,r2);
   else
      printf("Roots are %lf and %lf \n", r1,r2);
}
