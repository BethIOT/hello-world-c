#include<stdio.h>
void main()
{  int a, b, t;
   char op;
   printf("Enter the simple math eq to solv(+,-,*,/):\n");
   scanf ("%d %c %d",&a,&op,&b);
   switch(op)
   { case'+' : t=a+b;
               printf("Sum is %d",t);
               break;
     case'-' : t=a-b;
               printf("Difference is %d",t);
               break;
     case'*' : t=a*b;
               printf("Product is %d",t);
               break;
     case'/' : t=a/b;
               printf("Quotient is %d",t);
               break;
     default : printf("Not a valid eq");
   }
   printf("\n");
}
