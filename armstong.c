#include<stdio.h>
int armstrong(int k)
{  int temp=0, t;
   do
   {  t=k%10;
      temp+=t*t*t;
      k=k/10;
   }while(k>0);
//   printf("%d\n",temp);
   return temp;
}
void main()
{  int a, fl,lt,i;
/*   printf("Enter a number : \n");
   scanf ("%d",&a);
   fl = armstrong(a);
   if (fl==a)
      printf("Number is armstrong\n");
   else
      printf("Number is not armstrong\n");*/
   printf("Enter a limit (below 500): \n");
   scanf("%d",&lt);
   printf("Armstrong numbers upto %d : ",lt);
   for(i=1;i<=lt;i++)
   {  if(i==armstrong(i))
         printf("%d, ",i);
   }
   printf("\n");
}
