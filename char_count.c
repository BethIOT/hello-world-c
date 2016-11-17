#include<stdio.h>
void main()
{  char s[40];
   int i=0, num=0, ch=0, spc=0;
   printf("Enter a string:\n");
   for(i=0;;i++)
   {  s[i]=getchar();
      if(s[i]=='\n')
         break;
   }
   s[i]='\0';
   for(i=0;s[i]!='\0';i++)
   {  if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
         ch++;
      else if(s[i]>='0'&&s[i]<='9')//must put quotes for digits
         num++;
      else
         spc++;
   }
   printf("There are %d characters, %d numerals and %d special characters\n",ch,num,spc);
}
