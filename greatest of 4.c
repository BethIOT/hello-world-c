#include <stdio.h>
void main()
{  int a,b,c,d;
   printf("Enter first number :");
   scanf ("%d",&a);
   printf("Enter second number :");
   scanf ("%d",&b);
   printf("Enter third number :");
   scanf ("%d",&c);
   printf("Enter fourth number :");
   scanf ("%d",&d);
   if (a==b && a==c && a==d)
     printf("They are all equal.\n");
   else if (a>b && a>c && a>d)
     printf("%d is greater of the four.\n",a);
   else if(b>c && b>d)
     printf("%d is greater of the four.\n",b);
   else if(c>d)
     printf("%d is greater of the four.\n",c);
   else 
     printf("%d is greater of the four.\n",d);
}
   
