#include <stdio.h>
void main()
{  int a, b;
//   int temp=0;
   printf("\nEnter First number : ");
   scanf ("%d",&a);
   printf("Enter Second number : ");
   scanf ("%d",&b);
   printf("Ill be swapping them : ");
/*   temp = a;
   a = b;
   b = temp; */
   a=a+b;
   b=a-b;
   a=a-b;
   printf("\nNow the first number is : %d and the second is : %d ",a, b);
}
