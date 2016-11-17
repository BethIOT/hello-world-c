#include<stdio.h>
void main()
{  int a[5], b[5], i=0;
   printf("Enter elements of 1st array");
   for(i=0;i<5;i++)
      scanf("%d",&a[i]);
   printf("Enter elements of 2nd array");
   for(i=0;i<5;i++)
      scanf("%d",&b[i]);
   printf("Sum of the 2 arrays : ");
   for(i=0;i<5;i++)
      printf("%d, ",a[i]+b[i]);
   printf("\n");
}
   
