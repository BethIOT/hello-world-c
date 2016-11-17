#include<stdio.h>
void main()
{  char s1[40], s2[20];
   int i=0, lt;
   printf("Enter first string:\n");
   for(i=0;;i++)
   {  s1[i]=getchar();
      if(s1[i]=='\n')
         break;
   }
   lt=i;
   s1[i]='\0';
   printf("Enter second string:\n");
   for(i=0;;i++)
   {  s2[i]=getchar();
      if(s2[i]=='\n')
         break;
   }
   s2[i]='\0';
   printf("Concatenating 2nd to 1st string\n");
   for(i=lt; s2[i-lt]!='\0' ;i++) // Ususally we dont need to feed this condition when handelling strings. But we get an error without it
      s1[i]=s2[i-lt];
   s1[i]='\0';
   printf("Concateneated string:\n");
   for(i=0;;i++)
   {  putchar(s1[i]);
      if(s1[i]=='\0')
         break;
   }
   printf("\n");
}
   
