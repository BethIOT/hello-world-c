#include<stdio.h>
void asc(int *p, int q)
{  int tp, i, j;
   for(i=0;i<q;i++)
      for(j=i;j<q;j++)
        if(p[i]>p[j])
        {  tp=*(p+i);
           *(p+i)=*(p+j);
           *(p+j)=tp;
        }
}
void dsc(int *p, int q)
{  int tp, i, j;
   for(i=0;i<q;i++)
      for(j=i;j<q;j++)
        if(p[i]<p[j])
        {  tp=*(p+i);
           *(p+i)=*(p+j);
           *(p+j)=tp;
        }
}
void del(int *p, int q, int r)
{  int i;
   printf("%d is deleted",*(p+r-1));
   for(i=r-1;i<q;i++)
     *(p+i)=*(p+i+1);
}
void main()
{  int a[20]={0}, n, i, k;
   char flag;
   printf("Enter no of terms in the array\n");
   scanf(" %d",&n);
   printf("Enter data of array\n");
   for(i=0;i<n;i++)
      scanf(" %d",&a[i]);
   printf("So, The orignal array is         : ");
   for(i=0;i<n;i++)
      printf("%d ", a[i]);
   dsc(a,n);
   printf("\nAnd array in descending order is : ");
   for(i=0;i<n;i++)
      printf("%d ", a[i]);
   asc(a,n);
   printf("\nAnd array in ascending order is  : ");
   for(i=0;i<n;i++)
      printf("%d ", a[i]);
   printf("\n");
   do
   {  printf("Enter the position you wish to delete :\n");
      scanf("%d",&k);
      del(a,n,k);
      printf("\nAnd now the array is  : ");
      for(i=0;i<n-1;i++)
         printf("%d ", a[i]);
     // n--;
      printf("\nDo you wish to delete any more? (y=yes||n=no)\n");
      scanf(" %c",&flag);
   }while(flag=='Y'||flag=='y');
}
   
