#include<stdio.h>
#include<string.h>
void main()
{  char s[50];
   int i,count=0;
   printf("Enter a string\n");
   gets(s);
   for(i=0;i<strlen(s);i++)
      if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
         count++;
   printf("There are %d vowels in the string\n",count);
}
