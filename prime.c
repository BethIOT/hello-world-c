#include<stdio.h>
void main()
{  int a, i=2, flag=0;
   printf("To check if a number is prime or composite.\n");
   printf("Enter a number:");
   scanf ("%d",&a);
//   for(;i<a;i++)
//   {  if(a%i==0)
//      {  printf("This is composite.\n");
//         flag=1;
//         break;
//      }
//   }
//   while(i<a)
//   {  if(a%i==0)
//      {  printf("This is composite.\n");
//         flag=1;
//         break;
//      }
//      i++;
//   }
   do
   {  if(a%i==0)
      {  printf("This is composite.\n");
         flag=1;
         break;
      }
      i++;
   }while(i<a);
   if (flag==0)
      printf("This is a prime number.\n");
}
