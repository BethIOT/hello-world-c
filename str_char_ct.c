#include<stdio.h>
#include<string.h>
void main()
{  char s[50];
   int i, j, fl, count;
   printf("Enter a string\n");
   gets(s);
   for(i=48;i<123;i++)
   {  count=0;
      fl=0;
      for(j=0;j<strlen(s);j++)
         if(s[j]==(char)i)
         {  fl=1;
            count++;
         }
      if(fl==1)
         printf("%c = %dtimes\n",(char)i,count);
   }
}
