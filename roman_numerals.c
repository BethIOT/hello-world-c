#include<stdio.h>
void main()
{  int num, m, d, c, l, x, v, i, p;
   printf("Enter a number : ");
   scanf("%d",&num);
   printf("The roman numeral is : ");
   d=num%1000;
   m=num/1000;
   if(m>=1)
      while(m>=1)
      {  printf("M");
         m--;
      }
   if(d>=900)
   {  printf("CM");
      d-=900;
   }
   c=d%500;
   d=d/500;
   if(d>=1)
      while(d>=1)
      {  printf("D");
         d--;
      }
   if(c>=400)
   {  printf("CD");
      c-=400;
   }
   l=c%100;
   c=c/100;
   if(c>=1)
      while(c>=1)
      {  printf("C");
         c--;
      }
   if(l>=90)
   {  printf("XC");
      l-=90;
   }
   x=l%50;
   l=l/50;
   if(l>=1)
      while(l>=1)
      {  printf("L");
         l--;
      }
   if(x>=40)
   {  printf("XL");
      x-=40;
   }
   v=x%10;
   x=x/10;
   if(x>=1)
      while(x>=1)
      {  printf("X");
         x--;
      }
   if(v>=9)
   {  printf("IX");
      v-=9;
   }
   i=v%5;
   v=v/5;
   if(v>=1)
      while(v>=1)
      {  printf("V");
         v--;
      }
   if(i>=4)
   {  printf("IV");
      i-=4;
   }
   if(i>=1)
      while(i>=1)
      {  printf("I");
         i--;
      }
   printf("\n");
}
