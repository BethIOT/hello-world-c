#include<stdio.h>
void main()
{  int n1, n2, n3, l=1, i;
   char ch;
   printf("Enter 3 numbers : ");
   scanf("%d%d%d",&n1,&n2,&n3);
   printf("Type '1' to find find lcm\nType '2' to find gcd\n"); 
   scanf(" %c",&ch);
   switch(ch)
   { case '1' : printf("LCM = ");
                i=2;
                while(n1>1||n2>1||n3>1)
                {  if(n1%i==0&&n2%i==0&&n3%i==0)
                   {  n1/=i;
                      n2/=i;
                      n3/=i;
                      l*=i;
                   }
                   else if(n1%i==0&&n2%i==0)
                   {  n1/=i;
                      n2/=i;
                      l*=i;
                   }
                   else if(n1%i==0&&n3%i==0)
                   {  n1/=i;
                      n3/=i;
                      l*=i;
                   }
                   else if(n2%i==0&&n3%i==0)
                   {  n2/=i;
                      n3/=i;
                      l*=i;
                   }
                   else if(n1%i==0)
                   {  n1/=i;
                      l*=i;
                   }
                   else if(n2%i==0)
                   {  n2/=i;
                      l*=i;
                   }
                   else if(n3%i==0)
                   {  n3/=i;
                      l*=i;
                   }
                   else
                      i++;
                }
                printf("%d \n",l);
                break;
     case '2' : printf("GCD : ");
                i=n1;
                while(1)
                {  if(n1%i==0&&n2%i==0&&n3%i==0)
                      break;
                   i--;
                }
                printf("%d \n",i);
                break;
     default : printf("Not a valid option \n");
               break;
   }
}
                   
                   
                   
                   
