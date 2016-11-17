#include<stdio.h>
#include<string.h>
void main()
{  char s1[50], s2[50];
   int a;
   printf("Enter string 1\n");
   gets(s1);
   printf("Enter string 2\n");
   gets(s2);
   a=strcmp(s1,s2);
   if(a==0)
     printf("These are the same");
   else if(a>0)
      printf("String 1 has more value");
   else if(a<0)
      printf("String 2 has more value");
   printf("\n");
}
