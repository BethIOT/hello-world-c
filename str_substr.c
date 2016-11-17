#include<stdio.h>
#include<string.h>
void main()
{  char a[120], b[20];
   int i, j, t, n=0, fl, count, pos[15];
   printf("Enter a large string :\n");
   gets(a);
   printf("Enter sub string to be searched :\n");
   gets(b);
   for(i=0;i<strlen(a);i++)
   {  if(a[i]==b[0])
      {  t=i;
         for(j=1;j<strlen(b);j++)
         {  if(a[i+j]==b[j])
               fl=1;
            else
            {  fl=0;
               break;
            }
         }
         if(fl==1)
         {  count++;
            pos[n++]=t;
         }
      }
   }
   printf("\"%s\" has been repeated %d times at",b,count);
   for(i=0;i<n;i++)
      printf(" %d,",pos[i]);
   printf("\n");
}
               
