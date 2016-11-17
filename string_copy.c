#include<stdio.h>
void main()
{  char s1[30], s2[30]={"tip"};
   int i;
   printf("Enter the first string \n");
   for(i=0; ;i++)
   {  s1[i]=getchar();
      if (s1[i]=='\n')
         break;
   }
   s1[i]='\0';
   printf("This is second string\n");
   printf("%s \n",s2);
   printf("Copyin first string to the second\n");
   for(i=0 ; s1[i]!='\0'; i++)
      s2[i]=s1[i];
   printf("This is first string\n");
   printf("%s \n",s1);
   printf("This is second string\n");
   printf("%s \n",s2);
}
