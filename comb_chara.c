// CODE MUST BE OPTIMISED FOR 4th CASE UPWORD
#include<stdio.h>
char c[6]={'0'};
void swap(int a, int b)
{  char tp;
   tp=c[a];
   c[a]=c[b];
   c[b]=tp;
   printf("\n");
}
void main()
{  int ct, i, j, k, l, m, n, o, p, q, t=1;
   printf("Enter the no of characters you wish to shuffle (max=6 ; min=2):");
   scanf("%d",&ct);
   for(i=0;i<ct;i++)
   {  printf("Enter char %d :",i+1);
      scanf(" %c",&c[i]);
   }
   printf("These are the shuffles : \n");
   switch(ct)
   {  case 2 : for(j=1;j>=0;j--)
               {  printf("%d : ",t++);
                  for(i=0;i<ct;i++)
                     printf(" %c",c[i]);
                  if(j>0)
                     swap(ct-1,ct-2);
               }
               break;
      case 3 : for(k=2;k>=0;k--)
               {  for(j=1;j>=0;j--)
                  {  printf("%d : ",t++);
                     for(i=0;i<ct;i++)
                        printf(" %c",c[i]);
                     if(j>0)
                        swap(ct-1,ct-2);
                  }
                  if(k>0)
                     swap(ct-1,ct-3);
               }
               break;
      case 4 : for(l=3;l>=0;l--)
               {  for(k=2;k>=0;k--)
                  {  for(j=1;j>=0;j--)
                     {  printf("%d : ",t++);
                        for(i=0;i<ct;i++)
                           printf(" %c",c[i]);
                        if(j>0)
                           swap(ct-1,ct-2);
                     }
                     if(k>0)
                        swap(ct-1,ct-3);
                  }
                  if(l>0)
                     swap(ct-1,ct-4);
               }
               break;
      case 5 : for(m=4;m>=0;m--)
               {  for(l=3;l>=0;l--)
                  {  for(k=2;k>=0;k--)
                     {  for(j=1;j>=0;j--)
                        {  printf("%d : ",t++);
                           for(i=0;i<ct;i++)
                              printf(" %c",c[i]);
                           if(j>0)
                              swap(ct-1,ct-2);
                        }
                        if(k>0)
                           swap(ct-1,ct-3);
                     }
                     if(l>0)
                        swap(ct-1,ct-4);
                  }
                  if(m>0)
                     swap(ct-1,ct-5);
               }
               break;
      case 6 : for(n=5;n>=0;n--)
               {  for(m=4;m>=0;m--)
                  {  for(l=3;l>=0;l--)
                     {  for(k=2;k>=0;k--)
                        {  for(j=1;j>=0;j--)
                           {  printf("%d : ",t++);
                              for(i=0;i<ct;i++)
                                 printf(" %c",c[i]);
                              if(j>0)
                                 swap(ct-1,ct-2);
                           }
                           if(k>0)
                              swap(ct-2,ct-3);
                        }
                        if(l>0)
                           swap(ct-3,ct-4);
                     }
                     if(m>0)
                        swap(ct-4,ct-5);
                  }
                  if(n>0)
                     swap(ct-5,ct-6);
               }
               break;
   }
   printf("\n");
}
