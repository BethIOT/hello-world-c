#include<stdio.h>
void main()
{  int a[4][3], b[3][4], i, j, t=0, k, (*p)[3], (*q)[4], prod;
   p=a;
   q=b;
   printf("Enter 12 elements the 1st matrix :\n");
   for(i=0;i<4; i++)
   {  for(j=0;j<3;j++)
      {  printf("Element %d : ",++t);
         scanf("%d",*(p+i)+j);
      }
   }
   t=0;
   printf("Enter 12 elements the 2nd matrix :\n");
   for(i=0;i<3; i++)
   {  for(j=0;j<4;j++)
      {  printf("Element %d : ",++t);
         scanf("%d",*(q+i)+j);
      }
   }
   printf("1st matrice is :\n");
   for(i=0;i<4;i++)
   {  for(j=0;j<3;j++)
         printf("%d ",*(*(p+i)+j));
      printf("\n");
   }
   printf("2nd matrice is :\n");
   for(i=0;i<3;i++)
   {  for(j=0;j<4;j++)
         printf("%d ",*(*(q+i)+j));
      printf("\n");
   }
   printf("Product of these matrices : \n");
   for(i=0;i<4;i++)
   {  for(j=0;j<4;j++)
      {  prod=0;
         for(k=0;k<3;k++)
            prod+=(*(*(p+i)+k))*(*(*(q+k)+j));
         printf("%d ",prod);
      }
      printf("\n");
   }
   printf("Sum of these matrices :\n");
   for(i=0;i<4;i++)
   {  for(j=0;j<4;j++)
      {  if((i==3) && (j==3))
            printf("0");
         else if(j==3)
            printf("%d ",*(*(q+i)+j));
         else if(i==3)
            printf("%d ",*(*(p+i)+j));
         else
            printf("%d ",*(*(p+i)+j)+*(*(q+i)+j));
      }
      printf("\n");
   }
}
   
