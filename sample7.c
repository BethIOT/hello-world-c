// second loop freezes; doesnt matter if its for/while/do/
// it had frozen
#include<stdio.h>
void main()
{  char a[10];
   char b[10];
   int n1=0, n2=0, i, j, sum, mult=1, s1=0, s2=0;
   printf("Enter the first number");
   scanf("%s",a);
   i=0;
   while (a[i]!='\0')
   {  i++;
      s1++;
   }
   printf("this is out  of a : %s",a);
   printf("Enter the sec number");
   scanf("%s",b);
   i=0;
   while (b[i]!='\0')
   {  i++;
      s2++;
   }
   printf("this is out of b: %s",b);
   j=0;
   for (i=s1; i>=0 ; i--)
   {  while(j>0)
      {  mult*=10;
      }
      n1+=a[i]*mult;
      j++;
   }
   j=0;
   for (i=s2; i>=0 ; i--)
   {  while(j>0)
      {  mult*=10;
      }
      n2+=b[i]*mult;
      j++;
   }
   sum=n1+n2;
   printf("Adding %d and %d we get %d \n",n1, n2, sum);
}
      
   
