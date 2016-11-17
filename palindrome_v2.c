// if the array size is exceeded, u will get output and also warning "***stack smashing detected***"
#include<stdio.h>
void main()
{  char s[30];
   int i, lt=0, flag=0;
   printf("Enter the character to put into a string :\n");
   printf("Press ** to end string\n");
   for(i=0; ; i++)
   {  s[i]=getchar();
      if(i>=2)
         if(s[i-1]=='*' && s[i]=='*')
            break;
   }
   printf("This is the string you entered : \n");
   for(i=0 ;s[i]!='*'; i++)
      putchar(s[i]);
   printf("\n");
   printf("Checking for palindrome:\n");
   i=0;
   while(s[i]!='*')
   { i++;
     lt++;
   }
   lt--;
   for(i=0; i<lt ; i++)
   {  if(s[i]==s[lt-i])
         flag=1;
      else
      {  flag=0;
         break;
      }
   }
   if (flag==1)
      printf("String is palindrome");
   else
      printf("Sting is not palindrome");
   printf("\n");
}
