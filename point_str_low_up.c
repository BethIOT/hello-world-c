#include<stdio.h>
int ztrlen(char*p)
{  int i;
   for(i=0;p[i]!='\0';i++);
   return i;
}
void blanks(char *p, char *q, int r)
{  int i, j=0;
   for(i=0; i<=r; i++)
   {  if(p[i]!=' ')
         q[j++]=p[i];
      else if (p[i]==' ')
      {  if(p[i-1]!=' ')
            q[j++]=p[i];
         else
            continue;
      }
   }
}
void upper(char *p, char *q, int r)
{  int i;
   for(i=0;i<=r;i++)
   {  if(p[i]<='z')
        if(p[i]>='a')
          q[i]=p[i]-32;
      else
         q[i]=p[i];
   }
}
void lower(char *p, char *q, int r)
{  int i;
   for(i=0;i<=r;i++)
   {  if(p[i]>='A')
        if(p[i]<='Z')
         q[i]=p[i]+32;
       else
         q[i]=p[i];
   }
}
void both(char *p, char *q, int r)
{  int i;
   for(i=0;i<=r;i++)
   {  if(p[i]>='A')
        if(p[i]<='Z')
         q[i]=p[i]+32;
      else if(p[i]<='z')
        if(p[i]>='a')
         q[i]=p[i]-32;
   }
}
void occ(char *p,int r)
{ char i;
  int j, ct;
  for(i=97;i<123;i++)
  {  ct=0;
     for(j=0;j<=r;j++)
        if(i==p[j])
           ct++;
     if(ct>0)
        printf("%c is shown %d times\n",i,ct);
  }
  for(i=65;i<91;i++)
  {  ct=0;
     for(j=0;j<=r;j++)
        if(i==p[j])
           ct++;
     if(ct>0)
        printf("%c is shown %d times\n",i,ct);
  }
}
void main()
{  char a[50], b[50];
   int t;
   printf("Type a sentence : \n");
   scanf("%[^\n]s",a);
   t=ztrlen(a);
   printf("\nNo. of characters in the string = %d\n",t);
   printf("\nChanging all letters to upper case : \n");
   upper(a,b,t);
   printf("%s\n",b);
   printf("\nChanging all letters to lower case : \n");
   lower(a,b,t);
   printf("%s\n",b);
   printf("\nSwitching the cases : \n");
   both(a,b,t);
   printf("%s\n",b);
   printf("\nRemoving extra blanks : \n");
   blanks(a,b,t);
   printf("%s\n",b);
   printf("\nThe oringinal string is :\n");
   printf("%s\n",a);
   printf("\nCounting occurances :\n");
   occ(a,t);
}
