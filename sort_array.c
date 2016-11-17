#include<stdio.h>
void main()
{  int a[10], i, j;
   printf("Enter 10 elements of the array :\n");
   for(i=0;i<10;i++)
      scanf ("%d",&a[i]);
   printf("Now we will sort the array:\n");
   for(i=0; i<10; i++)
      for(j=1; j<(10-i); j++)
         if(a[j-1]>a[j])
         {  a[j-1]=a[j-1]+a[j];
            a[j]=a[j-1]-a[j];
            a[j-1]=a[j-1]-a[j];
         }  
   printf("Now the sorted array is :\n");
   for(i=0;i<10;i++)
      printf("%d, ",a[i]);
   printf("\n");
}
