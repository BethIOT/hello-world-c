#include<stdio.h>
void main()
{  int a, k=10, flag=0, i;
   printf("Enter a number");
   scanf ("%d",&a);
   while(a/k>0)
      k*=10;
   k/=10;
   printf("%d\n",k);
   for(i=0;a>0;i++)
   { /* printf("A %d\n",a);
      printf("P %d\n",a%10);
      printf("k %d\n",k);
      printf("K %d\n",a/k); Used for verifying */
      if((a%10)==(a/k))
      {  flag=1;
         a-=(a/k)*k;
         k/=100;
         a/=10;
      }
      else
      {  flag=0;
         printf("Number is not plaindrome \n");
         break;
      }
   }
   if(flag==1)
      printf("Number is plaindrome \n");
} 
