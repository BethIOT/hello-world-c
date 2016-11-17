// got to create a function to recover the number
#include<stdio.h>
#include<string.h>
void rev (int *p, int q)
{  int t=1, i=10;
   while(q/t>0)
      t*=10;
   do
   {  t/=10;
      *p+=(q%i)*t;
      q/=10;
   }while(q>0);
}
void main()
{  int a, b=0, *p;
   p=&b;
   printf("Enter a big number\n");
   scanf("%d",&a);
   rev(&b,a);
   printf("The number %d when reversed is %d\n",a,*p);
}
/*void main()
{  int a, i;
   char k[50];
   printf("Enter the number : ");
   scanf("%d", &a);
   sprintf(k,"%d", a);
   printf("The reversed number is ");
   for(i=strlen(k);i>=0;i--)
      printf("%c",k[i]);
   printf("\n");
}*/

