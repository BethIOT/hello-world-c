// few garbage values are displayed in the last(sum) for loop
#include<stdio.h>
unsigned int add(int *p,int *q, int r)
{  int a[20], i=0;
   printf("\n%d %d\n", *(p+r-2),*(q+r-2));
   for(i=0;i<r;i++)
      a[i]=*(p+i)+q[i];
   printf("\n%d\n",a[r-2]);
   return a;
}
void main()
{  int a[20]={0}, b[20]={0}, i, n, m, t, *sum;
   printf("Enter no of terms in first array\n");
   scanf(" %d",&n);
   printf("Enter data of array\n");
   for(i=0;i<n;i++)
      scanf(" %d",&a[i]);
   printf("Enter no of terms in second array\n");
   scanf(" %d",&m);
   printf("Enter data of array\n");
   for(i=0;i<m;i++)
      scanf(" %d",&b[i]);
   if(m>n)
      t=m;
   else
      t=n;
   sum=add(a,b,t);
   printf("\n%d\n",sum[t-2]);   
   printf("So, The first array is  : ");
   for(i=0;i<t;i++)
      printf("%d ", a[i]);
   printf("\nAnd the second array is : ");
   for(i=0;i<t;i++)
      printf("%d ", b[i]);
   printf("\nAnd the sum of arrays   : ");
   for(i=0;i<t;i++)
      printf("%d ", i[sum]);
   printf("\n");
}
