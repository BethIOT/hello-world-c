#include<stdio.h>
void hun()
{  printf("Hundred ");
}
void ths()
{  printf("Thousand ");
}
void mil()
{  printf("Million ");
}
void bil()
{  printf("Billion ");
}
void name(s)
{  switch (s)
   {  case 0 : break;
      case 1 : printf("One ");
               break;
      case 2 : printf("Two ");
               break;
      case 3 : printf("Three ");
               break;
      case 4 : printf("Four ");
               break;
      case 5 : printf("Five ");
               break;
      case 6 : printf("Six ");
               break;
      case 7 : printf("Seven ");
               break;
      case 8 : printf("Eight ");
               break;
      case 9 : printf("Nine ");
               break;
      case 10 : printf("Ten ");
                break;
      case 11 : printf("Eleven ");
                break;
      case 12 : printf("Twelve ");
                break;
      case 13 : printf("Thirteen ");
                break;
      case 14 : printf("Fourteen ");
                break;
      case 15 : printf("Fifteen ");
                break;
      case 16 : printf("Sixteen ");
                break;
      case 17 : printf("Seventeen ");
                break;
      case 18 : printf("Eighteen ");
                break;
      case 19 : printf("Nineteen ");
                break;
      case 20 : printf("Twenty ");
                break;
      case 30 : printf("Thirty ");
                break;
      case 40 : printf("Forty ");
                break;
      case 50 : printf("Fifty ");
                break;
      case 60 : printf("Sixty ");
                break;
      case 70 : printf("Seventy ");
                break;
      case 80 : printf("Eighty ");
                break;
      case 90 : printf("Ninety ");
                break;
      default : printf("Messed up!");
                break;
   }
}       
/*void main() // This is commented only because there is conflicting main() when called by "file_inc.c"
{  char num_name[100];
   long unsigned int n;
   int s[10]={0}, p, t, lt, i;
   printf("Enter the number :");
   scanf ("%ld", &n);
   for(i=0; n>=1 ;i++)
   {  t=n%10;
      s[i]=t;
      if (i==1 || i==4 || i==7)
      {  p=i;
         if (s[p]==1)
         {  s[p]=10+s[p-1];
            s[p-1]=0;
         }
         else
            s[p]=s[p]*10;
      }
      n=n/10;
   }
   lt=i;
   printf("This is irrelevent\n");
   for(i=lt-1;i>=0;i--)
      printf("%d, ",s[i]);
   printf("Limit %d\n",lt);
   printf("\nThe number name is :\n");
   for(i=lt-1;i>=0;i--)
   {  name(s[i]); 
      if(i==2||i==5||i==8||i==11)
        if(s[i]!=0)
            hun();
        else continue;
      if(i==9)
         bil();
      if(i==6)
         mil();
      if(i==3)
         ths();
   }
   printf("only\n");
}*/

