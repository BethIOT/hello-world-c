#include<stdio.h>
void main()
{  int n, r, k=1, i;
   char ch;
   printf("To find combination type c\nTo find permutaion type p\n");
   scanf(" %c",&ch);
   switch(ch)
   { case'p' : printf("Enter 'n' and 'r'\n");
               scanf("%d%d",&n,&r);
               for(i=n;i>0;i--)
                  k*=i;
               for(i=(n-r);i>0;i--)
                  k/=i;
               printf("%dP%d = %d\n",n,r,k);
               break;
     case'c' : printf("Enter 'n' and 'r'\n");
               scanf("%d%d",&n,&r);
               for(i=n;i>0;i--)
                  k*=i;
               for(i=(n-r);i>0;i--)
                  k/=i;
               for(i=r;i>0;i--)
                  k/=i;   
               printf("%dC%d = %d\n",n,r,k);
               break;
     default : printf("Wrong option");
               break;
   }
}
