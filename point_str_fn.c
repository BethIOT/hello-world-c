#include<stdio.h>
int ztrlen(char *p)
{  int i;
   for(i=0;p[i]!='\0';i++);
   return i;
}
void ztrcpy(char *p, char *q)
{  int i;
   for(i=0; q[i]!='\0'; i++)
      p[i]=q[i];
   p[i]='\0';
}
int ztrcmp(char *p, char *q)
{  int c1=0, c2=0, i, r, s;
   r=ztrlen(p);
   s=ztrlen(q);
   if(r==s)
   {  for(i=0; p[i]!='\0'; i++)
         c1+=p[i];
      for(i=0; q[i]!='\0'; i++)
         c2+=q[i];
      return c1-c2;
   }
   else if(r>s)
   return r;
   else return (-s);
}
void ztrcat(char *p, char *q)
{  int i=0,j=0;
   for(i=0; p[i]!='\0'; i++);
   p[i]=' ';
   p[i++]=' ';
   for(j=0; q[j]!='\0'; j++)
      p[i++]=q[j];
   p[i]='\0';
   
}
void main()
{  char a[50], b[50], fl;
   int t, ch;
   printf("Enter 1st string : \n");
   scanf(" %[^\n]s",a);
   t=ztrlen(a);
   printf("Length of this string is %d\n",t);
   printf("Enter 2nd string : \n");
   scanf(" %[^\n]s",b);
   t=ztrlen(b);
   printf("Length of this string is %d\n",t);
   do
   { printf("Enter your choice :\n1. To copy\n2. To compare\n3. To join\n>> ");
     scanf("%d",&ch);
     switch(ch)
     { case 1 : printf("The 2nd string will be copied over the 1st\n");
                ztrcpy(a,b);
                printf("1st : %s\n2nd : %s\n",a,b);
                break;
       case 2 : t=ztrcmp(a,b);
                if(t==0)
                   printf("They are the same..\n");
                else if(t<0)
                   printf("2nd string is greater\n");
                else 
                   printf("1st string is greater\n");
                break;
       case 3 : printf("The 2nd string will be appended to the 1st\n");
                ztrcat(a,b);
                printf("1st : %s\n2nd : %s\n",a,b);
                break;
       default : printf("Wrong option!\n");
                 break;
     }
     printf("Do you wish to do more ? (y=yes||n=no)");
     scanf(" %c",&fl);
   }while(fl=='y'||fl=='Y');
}
                
                
                

