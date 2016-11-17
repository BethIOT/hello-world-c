#include<stdio.h>
void main()
{  int lt, i, j;
   char ch='A';
   printf("Enter the limit");
   scanf ("%d",&lt);
   printf("\nNumber slope :\n");
   for(i=1;i<=lt;i++)
   {  for(j=i;j>0;j--)
      {  printf("%d",i);
      }
      printf("\n");
   }
   printf("\nGradient number slope :\n");
   for(i=1;i<=lt;i++)
   {  for(j=i;j>0;j--)
      {  printf("%d",i-j+1);
      }
      printf("\n");
   }
   printf("\nNumber triangle :\n");
   for(i=1; i<=lt; i++)
   {  for(j=-lt;j<lt;j++)
      {  if(j<0)
         {  if(j+i>0)
               printf("%d",i+j);
            else
               printf(" ");
         }
         else if(j==0)
            printf("%d",i);
         else if(j>0)
         {  if(i-j>0)
               printf("%d",i-j);
            else
               printf(" ");
         }
      }
      printf("\n");
   }
   printf("\nAlphabet triangle :\n");
   for(i=1; i<=lt; i++)
   {  for(j=-lt;j<lt;j++)
      {  if(j<0)
         {  if(i+j>0)
               printf("%c",ch+(-j));
            else
               printf(" ");
         }
         else if(j==0)
            printf("%c",ch);
         else if(j>0)
         {  if(i-j>0)
               printf("%c",ch+j);
            else
               printf(" ");
         }
      }
      printf("\n");
   }
   printf("\nAlphabet hollow triangle :\n");
   for(i=0; i<lt; i++)
   {  for(j=-lt;j<lt;j++)
      {  if(i+j==0||i-j==0)
            printf("%c",ch+i);
         else
            printf(" ");
      }
      printf("\n");
   }
}
   
