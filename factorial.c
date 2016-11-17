// Factorial of a number
#include <stdio.h>
void main()
{  int a, p, fact=1;
   printf("Enter the number you want to find the factorial of :");
   scanf("%d",&a);
   for(p=a;p>0;p--)
   { fact=fact*p;
   }
//   p=1;
//   while(p<=a)
//   { fact=fact*p;
//     p++;
//   }
//   p=a;
//   do
//   { fact=fact*p;
//     p--;
//   }while(p>0);
   
   printf("The factorial of %d is %d \n",a,fact);
}
   
