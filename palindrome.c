#include<stdio.h>
#include<string.h>
void main()
{  char s[30];
   int i, lt, flag=0;
   printf("Enter the character to put into a string :\n");
   printf("Press enter to end string\n");
   for(i=0; ; i++)
   {  scanf("%c",&s[i]);
      if(s[i]=='\n')
            break;
   }
   s[i]='\0';
   lt=i-1;
   printf("This is the string you entered : \n");
  for(i=0 ;s[i]!='\0'; i++)
	printf("%c",s[i]);
   printf("\n");
   printf("Checking for palindrome:\n");
   for(i=0; i<lt; i++)
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
