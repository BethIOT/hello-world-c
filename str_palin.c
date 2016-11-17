#include<stdio.h>
#include<string.h>
void main()
{  char a[50];
   int l, i, fl=0;
   printf("Enter a string ");
   gets(a);
   l=strlen(a);// the counting of strlen starts from 1 onwards... not 0 onwards
   for(i=0; i<=l/2; i++)
   {  if(a[i]==a[l-i-1]) // must provide the counting offset
         fl=1;
      else
      {  fl=0;
         break;
      }
   }
   if(fl==1)
      printf("This is a palindrome");
   else
      printf("This is not a palindrome");
   printf("\n");
}
