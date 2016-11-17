#include<stdio.h>
void main()
{  int a[10]={0}, i, lt, j, lcm=1, flag=0, exit=0, done;
   printf("Enter elements of array.\nEnter 0 when you are done\n");
   for(i=0;i<10;i++)
   {  scanf("%d",&a[i]);
      if(a[i]==0)
         break;
   }
   lt=i;
   printf("LCM : 1");
   i=2;
   while(exit<lt)
   {  flag=0;
      exit=0;
      done=0;
      for(j=0;j<lt;j++)
      {  if(a[j]==1)
            exit++;
         if(a[j]%i!=0)
            done++;
         else if(a[j]%i==0)
         {  flag=1;
            a[j]=a[j]/i;
         }
      }
      if(flag==1)
      {  printf("x%d",i);
         lcm*=i;
      }
      if(done==lt)
         i++;
   }
   printf(" = %d\n",lcm);
}
