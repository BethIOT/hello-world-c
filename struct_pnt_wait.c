#include<stdio.h>
struct stud
{ char nam[22];
  int roll;
  int mrk[5];
  float per;
};
void display(struct stud *p)
{ int i,j;
  printf(" Roll no  |\t Name  \t\t| Mat | Scn | G.K | Eng | Hin |    %    \t|\n");
  for(i=0;i<5;i++)
  { if((p+i)->roll==0)
      break;
    if((p+i)->roll<10)
      printf("\t0%d|",(p+i)->roll);
    else
      printf("\t%d|",(p+i)->roll);
    for(j=0;;j++)
    { printf("%c",(p+i)->nam[j]);
      if((p+i)->nam[j]=='\0')
      break;
    }
    while(j<22)
    { printf(" ");
      j++;
    }
    for(j=0;j<5;j++)
    { if((p+i)->mrk[j]<10)
        printf("| 0%d  ",(p+i)->mrk[j]);
      else
        printf("| %d  ",(p+i)->mrk[j]);
    }
    printf("| %f |\n",(p+i)->per);
  }
  printf("-----------------------------------------------------------------------------\n");
}
/*void sort(struct stud *p)
{ char ch1;
  int ch2, i, j, k;
  struct stud tmp;  
  printf("Do you wish to sort before displaying? (y=yes||n=no)\n");
  scanf(" %c", &ch1);
  if(ch1=='y')
  { printf("To sort in Decending order, add \"10\" to your choice. Ascending order by default\n");
    printf("To Sort by\n1.Roll no\n2.Name\n3.Percentage\n");
    scanf("%d",&ch2);
    switch(ch2)
    { case 1 : for(i=0;i<5;i++)
               { if((p+i)->roll==0)
                   break;
                 for(j=i+1;j<5;j++)
                 { if((p+j)->roll!=0)
                   { if(((p+i)->roll)>((p+j)->roll))
                     { tmp=*(p+i);
                       (p+i)=(p+j);
                       (p+j)=&tmp;
                     }
                   }
                   else continue;
                 }
               }
               display(p);
      case 11 : for(i=0;i<5;i++)
                { if((p+i)->roll==0)
                    break;
                  for(j=i+1;j<5;j++)
                  { if((p+j)->roll!=0)
                    { if(((p+i)->roll)<((p+j)->roll))
                      { tmp=*(p+i);
                        (p+i)=(p+j);
                        (p+j)=&tmp;
                      }
                    }
                    else continue;
                  }
                }
                display(p);
      case 3 : for(i=0;i<5;i++)
               { if((p+i)->roll==0)
                   break;
                 for(j=i+1;j<5;j++)
                 { if((p+j)->roll!=0)
                   { if(((p+i)->per)>((p+j)->per))
                     { tmp=*(p+i);
                       (p+i)=(p+j);
                       (p+j)=&tmp;
                     }
                   }
                   else continue;
                 }
               }
               display(p);
      case 13 : for(i=0;i<5;i++)
                { if((p+i)->roll==0)
                    break;
                  for(j=i+1;j<5;j++)
                  { if((p+j)->roll!=0)
                    { if(((p+i)->per)<((p+j)->per))
                      { tmp=*(p+i);
                        (p+i)=(p+j);
                        (p+j)=&tmp;
                      }
                    }
                    else continue;
                  }
                }
                display(p);
      case 2 : for(i=0;i<5;i++)
               { if((p+i)->roll==0)
                   break;
                 for(j=i+1;j<5;j++)
                 { if((p+j)->roll!=0)
                   { for(k=0;k<22;k++)
                     if(((p+i)->nam[k])>((p+j)->nam[k]))
                     { tmp=*(p+i);
                       (p+i)=(p+j);
                       (p+j)=&tmp;
                       break;
                     }
                   }
                   else continue;
                 }
               }
               display(p);
      case 12 : for(i=0;i<5;i++)
                { if((p+i)->roll==0)
                    break;
                  for(j=i+1;j<5;j++)
                  { if((p+j)->roll!=0)
                    { for(k=0;k<22;k++)
                        if(((p+i)->nam[k])<((p+j)->nam[k]))
                        { tmp=*(p+i);
                          (p+i)=(p+j);
                          (p+j)=&tmp;
                          break;
                        }
                    }
                    else continue;
                  }
                }
                display(p);
      default : printf("Wrong option. We now print unsorted\n");
                display(p);
    }
  } 
  else
  display(p);
}*/
int mod(struct stud *p, int r)
{ int i, j, tp=33, mx;
  float tot;
  for(i=0;i<5;i++)
  { if((p+i)->roll==r)
    { tp=0;
      printf("Student %d : Roll no :", i);
      printf("%d\n",(p+i)->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",(p+i)->nam);
      printf("\t    Marks in Math :");
      scanf("%d",&(p+i)->mrk[0]);
      printf("\t    Marks in Science :");
      scanf("%d",&(p+i)->mrk[1]);
      printf("\t    Marks in GK :");
      scanf("%d",&(p+i)->mrk[2]);
      printf("\t    Marks in English :");
      scanf("%d",&(p+i)->mrk[3]);
      printf("\t    Marks in Hindi :");
      scanf("%d",&(p+i)->mrk[4]);
      printf("\t    Max mark in test series = ");
      scanf("%d",&mx);
      tot=0.0;
      for(j=0;j<5;j++)
        tot+=(p+i)->mrk[j];
      (p+i)->per=(tot/(mx*5))*100;
      printf("\t    Percentage = %f\n",(p+i)->per);
      return tp;
    }    
  }
  return tp;
}
int add(struct stud *p)
{ int i, j, tp=33, mx;
  float tot; 
  for(i=0;i<5;i++)
  { if((p+i)->roll==0)
    { tp=0;
      printf("Student %d : Roll no :", i);
      scanf("%d\n",&(p+i)->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",(p+i)->nam);
      printf("\t    Marks in Math :");
      scanf("%d",&(p+i)->mrk[0]);
      printf("\t    Marks in Science :");
      scanf("%d",&(p+i)->mrk[1]);
      printf("\t    Marks in GK :");
      scanf("%d",&(p+i)->mrk[2]);
      printf("\t    Marks in English :");
      scanf("%d",&(p+i)->mrk[3]);
      printf("\t    Marks in Hindi :");
      scanf("%d",&(p+i)->mrk[4]);
      printf("\t    Max mark in test series = ");
      scanf("%d",&mx);
      tot=0.0;
      for(j=0;j<5;j++)
        tot+=(p+i)->mrk[j];
      (p+i)->per=(tot/(mx*5))*100;
      printf("\t    Percentage = %f\n",(p+i)->per);     
      return tp;
    }
  }
  return tp;
}
int del(struct stud *p, int r)
{ int i, j, tp=33;
  for(i=0;i<5;i++)
  { if((p+i)->roll==r)
    { tp=0;
      (p+i)->roll=0;
      (p+i)->nam[0]='\0';
      for(j=0;j<5;j++)
        (p+i)->mrk[j]=0;
      (p+i)->per=0.0;
      return tp;
    }    
  }
  return tp;
}
void main()
{ struct stud s[5];
  int i, ch2, md, tp;
  char ch1;
  for(i=0;i<5;i++)
    s[i].roll=0;
  printf("Welcome to class teacher portal\n");
  printf("Enter student details\n");
  do
  { tp=add(s);
    if(tp!=0)
    { printf("Meomry Full!\n");
      break;
    }
    else
    { printf("Any more students? (y=yes||n=no)\n");
      scanf(" %c",&ch1);
    }
  }while(ch1=='y'||ch1=='Y');
  do
  { printf("Do you wish to\n1.Display\n2.Modify\n3.Add\n4.Delete\n>>");
    scanf("%d",&ch2);
    switch(ch2)
    { case 1 : display(s);
               break;
      case 2 : printf("Enter Roll_no of the student you wish to update : ");
               scanf("%d",&md);
               tp=mod(s,md);
               if(tp!=0)
                 printf("Student details not found.!\nTry later...\n");
               break;
      case 3 : tp=add(s);
               if(tp!=0)
                 printf("Meomry Full!!!\nDelete some data and try later...\n");
               break;
      case 4 : printf("Enter Roll_no of the student you wish to delete : ");
               scanf("%d",&md);
               tp=mod(s,md);
               if(tp!=0)
                 printf("Student details not found.!\nTry later...\n");
               break;
      default : printf("Wrong option!\n");
                break;
    }
    printf("Do you wish to do more operations? (y=yes||n=no)\n");
    scanf(" %c",&ch1);
  }while(ch1=='y'||ch1=='Y');
}
