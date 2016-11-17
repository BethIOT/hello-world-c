// Sum and product of a matrix
#include<stdio.h>
void main()
{  int a[4][4], b[4][4],i, j, k, prod;
   printf("Enter 16 elements of first matrix :");
   for(i=0;i<4;i++)
      for(j=0;j<4;j++)
         scanf ("%d",&a[i][j]);
   printf("Enter 16 elements of second matrix :");
   for(i=0;i<4;i++)
      for(j=0;j<4;j++)
         scanf ("%d",&b[i][j]);
   printf("Sum of these matrices :");
   for(i=0;i<4;i++)
   {  for(j=0;j<4;j++)
         printf("%d, ",(a[i][j]+b[i][j]));
      printf("\n");
   }
   printf("product of these matrices :");
   for(i=0;i<4;i++)
   {  for(j=0;j<4;j++)
      {  prod=0;
         for(k=0;k<4;k++)
            prod+=a[i][k]*b[k][j];
         printf("%d, ",prod);
      }
      printf("\n");
   }
}
   
   
