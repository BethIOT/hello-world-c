#include<stdio.h>
void main()
{  int a[3][3],i,j;
   printf("Enter 9 2-digit numbers to fill into 3x3 matrix :\n");
   for(i=0;i<3;i++)
   {  printf("Enter data of row %d :\n",i);
      for(j=0;j<3;j++)
         scanf ("%d",&a[i][j]);
   }
   printf("Here is your 3x3 matrix :\n");
   for(i=0;i<3;i++)
   {  for(j=0;j<3;j++)
         printf("%d ", a[i][j]);
      printf("\n");
   }
   printf("\n");
}
