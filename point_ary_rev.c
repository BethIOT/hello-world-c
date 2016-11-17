//There is issue in the rev if condition i<q is used instead of i<=q
//Complete garbage values are displayed in the absence of rev->for->printf()
#include<stdio.h>
unsigned int rev(int *p,int q)
{  int i, a[20];
   q--;
   for(i=0; i<=q; i++)
   {  printf("%d", *(p+q-i));
      a[i]=*(p+q-i);
   }
   return a;
}
void main()
{  int a[20], i, n, *b;
   printf("Enter no of terms in first array\n");
   scanf(" %d",&n);
   printf("Enter data of array\n");
   for(i=0;i<n;i++)
      scanf(" %d",&a[i]);
   b=rev(a,n);
   printf("So, The original array is  : ");
   for(i=0;i<n;i++)
      printf("%d ", a[i]);
   printf("\nAnd the reversed array is  : ");
   for(i=0;i<n;i++)
      printf("%d ", b[i]);
   printf("\n");
}
