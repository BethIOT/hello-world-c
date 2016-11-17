//must check the possiblity of manipulating string(0)
#include<stdio.h>
#include<string.h>
void main()
{  char a[60], b[30], c[30];
   int i=0, j=0, bench, flag=0;
   printf("\nName (as in 10th certificate)    : ");
   gets(a);
   for(i=0;i<strlen(a);i++)
   {  if(i==0||a[i-1]==' ')
      {  b[j]=a[i];
         b[j+1]='.';
         j+=2;
      }
      else if(i==strlen(a)-1)
      {  j-=2;
         for(;a[i]!=' ';i--);
         i++;
         for(;i<strlen(a);i++)
         {  b[j]=a[i];
            j++;
         }
         b[j]='\0';
      }   
   }
   j=0;
   for(i=0;i<strlen(b);i++)
   {  if(b[i]>='A'&&b[i]<='Z')
         if(b[i+1]!='.')
         {  for(;i<strlen(b);i++)
               c[j++]=b[i];
            i--;
         }
      if(i==strlen(b)-1)
      {  c[j++]=',';
         c[j++]=' ';
         for(i=0;i<strlen(b);i++)
            if(b[i]>='A'&&b[i]<='Z')
               if(b[i+1]=='.')
               {  c[j++]=b[i];
                  c[j++]=b[++i];
               }
         c[j++]='\0';
      } 
   }
   printf("Showing Last name with intitials : %s \n\n",c);
}
      
      
