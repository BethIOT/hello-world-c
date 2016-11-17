#include<stdio.h>
void main()
{  char s1[20], s2[20];
   int i, flag=1;
   printf("Enter first string:\n");
   for(i=0;;i++)
   {  s1[i]=getchar();
      if(s1[i]=='\n')
         break;
   }
   s1[i]='\0';
   printf("Enter second string:\n");
   for(i=0;;i++)
   {  s2[i]=getchar();
      if(s2[i]=='\n')
         break;
   }
   printf("Comparing strings\n");
   for (i=0; ; i++) // unlike sting_concat.c, we get o/p without the condition
      if(s1[i]!=s2[i])
      {  break;
         flag=0;
      }
   if(flag=1)
      printf("Strings are the same\n");
   else
      printf("String are different\n");
}
