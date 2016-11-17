#include<stdio.h>
struct stud
{  char nam[22];
   int roll;
   int mrk[5];
   float per;
};
/*void display(struct stud *p)
{  int i, j;
   printf(" Roll no |\t\t Name \t\t| Mat | Scn | G.K | Eng | Hin |  %  |\n");
   for(i=0;i<5;i++)
   {  if(*(p+i).roll==0)
         break;
      printf("\t%d\t| ",*(p+i).roll);
      for(j=0;;j++)
      {  printf("%c",*(p+i).nam[j]);
         if(*(p+i).nam[j]=='\0')
            break;
      }
      while(j<=22)
         printf(" ");
      for(j=0;j<5;j++)
         printf("| %d  |",*(p+i).mrk[j]);
      printf("| %f  |\n",*(p+i).per);
   }
   printf("---------------------------------------------------------------\n");
}
int add(struct stud *p)
{  int i, j, flag=0, mx, tot=0;
   for(i=0;i<5;i++)
   {  if(*(p+i).roll==0)
      {  printf("Roll no :");
         scanf("%d",(p+i).roll);
         printf("Name : ");
         scanf("%[^\n]s",(p+i).nam);
         printf("Marks in Math :");
         scanf("%d",(p+i).mrk[0]);
         printf("Marks in Science :");
         scanf("%d",(p+i).mrk[1]);
         printf("Marks in GK :");
         scanf("%d",(p+i).mrk[2]);
         printf("Marks in English :");
         scanf("%d",(p+i).mrk[3]);
         printf("Marks in Hindi :");
         scanf("%d",(p+i).mrk[4]);
         printf("Max mark in test series = ");
         scanf("%d",&mx);
         tot=0;
         for(j=0;j<5;j++)
            tot+=*(p+i).mrk[j];
         s[i].per=(tot/mx)*100;
         printf("\t\t\tPercentage = %f\n", *(p+i).per);
         flag=1;
         return 2;
      }    
   }
   if(flag==0)
     return 0;
}
int mod(struct stud *p,int r)
{  int i, flag=0, mx, tot=0;
   for(i=0;i<5;i++)
   {  if(*(p+i).roll==r)
      {  printf("Student %d : Roll no :", i);
         printf("%d\n",*(p+i).roll);
         printf("\t\t\t: Name : ");
         scanf("%[^\n]s",(p+i).nam);
         printf("Marks in Math :");
         scanf("%d",(p+i).mrk[0]);
         printf("Marks in Science :");
         scanf("%d",(p+i).mrk[1]);
         printf("Marks in GK :");
         scanf("%d",(p+i).mrk[2]);
         printf("Marks in English :");
         scanf("%d",(p+i).mrk[3]);
         printf("Marks in Hindi :");
         scanf("%d",(p+i).mrk[4]);
         printf("Max mark in test series = ");
         scanf("%d",&mx);
         tot=0;
         for(j=0;j<5;j++)
            tot+=*(p+i)mrk[i];
         s[i].per=(tot/mx)*100;
         printf("\t\t\tPercentage = %f\n",*(p+i).per);
         flag=1;
         return 2;
      }    
   }
   if(flag==0)
     return 0;  
}
int del(struct stud *p,int r)
{  int i, flag=0;
   for(i=0;i<5;i++)
   {  if(*(p+i).roll==r)
      {  *(p+i).roll=0;
         *(p+i).nam="\0";
         for(j=0;j<5;j++)
            *(p+i).mrk[j]=0;
         *(p+i).per=0.0;
         flag=1;
         return 2;
      }    
   }
   if(flag==0)
     return 0;  
}*/
void main()
{  struct stud s[5], tmp;
   int i, j, k, mx, ch2, md, tp=0;
   float tot;
   char ch1;
   for(i=0;i<5;i++)
      s[i].roll=0;
   printf("Welcome to class teacher portal\n");
   printf("Enter student details\n");
   i=0;
   do
   {  printf("Student %d : Roll no :", i);
      scanf("%d",&s[i].roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",s[i].nam);
      printf("\t    Marks in Math :");
      scanf("%d",&s[i].mrk[0]);
      printf("\t    Marks in Science :");
      scanf("%d",&s[i].mrk[1]);
      printf("\t    Marks in GK :");
      scanf("%d",&s[i].mrk[2]);
      printf("\t    Marks in English :");
      scanf("%d",&s[i].mrk[3]);
      printf("\t    Marks in Hindi :");
      scanf("%d",&s[i].mrk[4]);
      printf("\t    Max mark in test series = ");
      scanf("%d",&mx);
      tot=0.0;
      for(j=0;j<5;j++)
         tot+=s[i].mrk[j];
      s[i].per=(tot/(mx*5))*100;
      printf("\t    Percentage = %f\n", s[i].per);
      printf("Do you wish to continue entering? (y=yes||n=no)\n");
      scanf(" %c",&ch1);
      if(ch1=='y'||ch1=='Y')
         i++;
      else
         printf("We are done with that..\n");
      if(i==4)
      {  printf("Memory full!\n");
         break;
      }
   }while(ch1=='y'||ch1=='Y');
   do
   {  printf("Do you wish to\n1.Display\n2.Modify\n3.Add\n4.Delete\n>>");
      scanf("%d",&ch2);
      switch(ch2)
      { case 1 : printf("Do you wish to sort before displaying? (y=yes||n=no)\n");
                 scanf(" %c", &ch1);
                 if(ch1=='y')
                 {  printf("To sort in Decending order, add \"10\" to your choice. Ascending order by default\n");
                    printf("To Sort by\n1.Roll no\n2.Name\n3.Percentage\n");
                    scanf("%d",&ch2);
                    switch(ch2)
                    { case 1 : for(i=0;i<5;i++)
                               {  if(s[i].roll==0)
                                     break;
                                  for(j=i+1;j<5;j++)
                                  {  if(s[j].roll!=0)
                                     {  if(s[i].roll>s[j].roll)
                                        {  tmp=s[i];
                                           s[i]=s[j];
                                           s[j]=tmp;
                                        }
                                     }
                                     else continue;
                                  }
                               }
                               goto disp;
                      case 11 : for(i=0;i<5;i++)
                                {  if(s[i].roll==0)
                                      break;
                                   for(j=i+1;j<5;j++)
                                   {  if(s[j].roll!=0)
                                      {  if(s[i].roll<s[j].roll)
                                         {  tmp=s[i];
                                            s[i]=s[j];
                                            s[j]=tmp;
                                         }
                                      }
                                      else continue;
                                   }
                                }
                                goto disp;
                      case 3 : for(i=0;i<5;i++)
                               {  if(s[i].roll==0)
                                     break;
                                  for(j=i+1;j<5;j++)
                                  {  if(s[j].roll!=0)
                                     {  if(s[i].per>s[j].per)
                                        {  tmp=s[i];
                                           s[i]=s[j];
                                           s[j]=tmp;
                                        }
                                     }
                                     else continue;
                                  }
                               }
                               goto disp;
                      case 13 : for(i=0;i<5;i++)
                                {  if(s[i].roll==0)
                                      break;
                                   for(j=i+1;j<5;j++)
                                   {  if(s[j].roll!=0)
                                      {  if(s[i].per<s[j].per)
                                         {  tmp=s[i];
                                            s[i]=s[j];
                                            s[j]=tmp;
                                         }
                                      }
                                      else continue;
                                   }
                                }
                                goto disp;
                      case 2 : for(i=0;i<5;i++)
                               {  if(s[i].roll==0)
                                     break;
                                  for(j=i+1;j<5;j++)
                                  {  if(s[j].roll!=0)
                                     {  for(k=0;k<22;k++)
                                           if(s[i].nam[k]>s[j].nam[k])
                                           {  tmp=s[i];
                                              s[i]=s[j];
                                              s[j]=tmp;
                                              break;
                                           }
                                     }
                                     else continue;
                                  }
                               }
                               goto disp;
                      case 12 : for(i=0;i<5;i++)
                                {  if(s[i].roll==0)
                                     break;
                                   for(j=i+1;j<5;j++)
                                   {  if(s[j].roll!=0)
                                      {  for(k=0;k<22;k++)
                                            if(s[i].nam[k]<s[j].nam[k])
                                            {  tmp=s[i];
                                               s[i]=s[j];
                                               s[j]=tmp;
                                               break;
                                            }
                                      }
                                      else continue;
                                   }
                                }
                                goto disp;
                      default : printf("Wrong option. We now print unsorted\n");
                                goto disp;
                      }
                    } 
                    else
                       goto disp;
                 disp:    
                 {  printf(" Roll no  |\t Name  \t\t| Mat | Scn | G.K | Eng | Hin |    %    \t|\n");
                    for(i=0;i<5;i++)
                    {  if(s[i].roll==0)
                          break;
                       if(s[i].roll<10)
                          printf("\t0%d|",s[i].roll);
                       else
                          printf("\t%d|",s[i].roll);
                       for(j=0;;j++)
                       {  printf("%c",s[i].nam[j]);
                          if(s[i].nam[j]=='\0')
                             break;
                       }
                       while(j<22)
                       {  printf(" ");
                          j++;
                       }
                       for(j=0;j<5;j++)
                       {  if(s[i].mrk[j]<10)
                             printf("| 0%d  ",s[i].mrk[j]);
                          else
                             printf("| %d  ",s[i].mrk[j]);
                       }
                       printf("| %f |\n",s[i].per);
                    }
                    printf("-----------------------------------------------------------------------------\n");
                 }
                 break;
        case 2 : printf("Enter Roll_no of the student you wish to update : ");
                 scanf("%d",&md);
                 for(i=0;i<5;i++)
                 {  if(s[i].roll==md)
                    {  tp=1;
                       printf("Student %d : Roll no :", i);
                       printf("%d\n",s[i].roll);
                       printf("\t    : Name :");
                       scanf("%[^\n]s",s[i].nam);
                       printf("\t    Marks in Math :");
                       scanf("%d",&s[i].mrk[0]);
                       printf("\t    Marks in Science :");
                       scanf("%d",&s[i].mrk[1]);
                       printf("\t    Marks in GK :");
                       scanf("%d",&s[i].mrk[2]);
                       printf("\t    Marks in English :");
                       scanf("%d",&s[i].mrk[3]);
                       printf("\t    Marks in Hindi :");
                       scanf("%d",&s[i].mrk[4]);
                       printf("\t    Max mark in test series = ");
                       scanf("%d",&mx);
                       tot=0.0;
                       for(j=0;j<5;j++)
                          tot+=s[i].mrk[j];
                       s[i].per=(tot/(mx*5))*100;
                       printf("\t    Percentage = %f\n",s[i].per);
                    }    
                 }
                 if(tp==0)
                    printf("Student details no found!!\nTry again later...\n");
                 break;
        case 3 : for(i=0;i<5;i++)
                 {  if(s[i].roll==0)
                    {  printf("Roll no :");
                       scanf("%d",&s[i].roll);
                       printf("Name :");
                       scanf("%[^\n]s",s[i].nam);
                       printf("Marks in Math :");
                       scanf("%d",&s[i].mrk[0]);
                       printf("Marks in Science :");
                       scanf("%d",&s[i].mrk[1]);
                       printf("Marks in GK :");
                       scanf("%d",&s[i].mrk[2]);
                       printf("Marks in English :");
                       scanf("%d",&s[i].mrk[3]);
                       printf("Marks in Hindi :");
                       scanf("%d",&s[i].mrk[4]);
                       printf("Max mark in test series = ");
                       scanf("%d",&mx);
                       tot=0.0;
                       for(j=0;j<5;j++)
                          tot+=s[i].mrk[j];
                       s[i].per=(tot/(mx*5))*100;
                       printf("Percentage = %f\n", s[i].per);
                       tp=2;
                    }
                    if(tp==2)
                       break;   
                 }
                 if(tp==0)
                    printf("Memory full !!\nDelete some entries and come back...\n");
                 break;
        case 4 : printf("Enter Roll_no of the student you wish to delete : ");
                 scanf("%d",&md);
                 for(i=0;i<5;i++)
                 {  if(s[i].roll==md)
                    {  s[i].roll=0;
                       s[i].nam[0]='\0';
                       for(j=0;j<5;j++)
                          s[i].mrk[j]=0;
                       s[i].per=0.0;
                       tp=2;
                    }    
                 }
                 if(tp==0)
                    printf("Student details no found!!\nTry again later...\n");
                 break;
        default : printf("Wrong option.!");
                  break;
      }
      printf("Do you wish to do more operations? (y=yes||n=no)\n");
      scanf(" %c",&ch1);
      printf("\n");
   }while(ch1=='y'||ch1=='Y');
}
