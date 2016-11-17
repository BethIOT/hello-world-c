#include<stdio.h>
int fib(int lt)
{  int a=0, b=2;
   printf("The series is : %d,", a);
   for(i=1;i<lt;i++)
   {  printf(" %d,",t2);
      b=b+a;
      a=b-a;
   }
   return 0;
}
void main()
{  int a;
   printf("Enter no of terms of fibbonaci series you wish to see :");
   scanf("%d", &a);
   fib(a);
   printf("\n");
}
   
