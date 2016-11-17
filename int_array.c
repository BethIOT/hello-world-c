#include<stdio.h>
void main()
{  int a[10], i;
   printf("Enter 10 numbers to be fed into an array:");
   for(i=0; i<10; i++)
      scanf ("%d",&a[i]);
    printf("These are the elements of the array:\n");
   for(i=0; i<10; i++)
      printf("%d, ",a[i]);
   printf("\n");
}
