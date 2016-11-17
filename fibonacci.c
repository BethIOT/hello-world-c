// Fibonacci series
#include<stdio.h>
void main()
{  int a, t1=0, t2=1, i;
   printf("Enter no terms Fibonacci series you wish to see:");
   scanf("%d",&a);
   printf("Series : %d,",t1);
//   for(i=1;i<a;i++)
//   {  printf(" %d,",t2);
//      t2=t2+t1;
//      t1=t2-t1;
//   }
//   i=1;
//   while(i<a)
//   {  printf(" %d,",t2);
//      t2=t2+t1;
//      t1=t2-t1;
//      i++;
//   }
   i=1;
   do
   { if (a>1)
     {  printf(" %d,",t2);
         t2=t2+t1;
         t1=t2-t1;
         i++;
     }
     else break;
   }while(i<a);
   printf("\n");
}   
