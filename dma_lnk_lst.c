//sorting completed. Algorithm included swaping data contained in each node.
//It was first though of as managing only the links, but it became very complicated
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//--------------------------------------------------------------------------------
struct stud
{ int roll;
  char nam[20];
  float per;
  struct stud *next;
}*base=NULL,*p=NULL,*q=NULL,*r=NULL;
//----------------------------------------------------------------------------------
void del_head()
{ p=base->next;
  free(base);
  base=p;
}
//--------------------------------------------------------------------------------------
void del_itm(int n)
{ int i, t=0;
  for(p=base;p!=NULL;p=p->next)
  { if(n==p->roll)
    { p=base;
      for(i=1;i<=t;i++)
      { if(i==t)
        { r=p->next;
          p->next=p->next->next;
          free(r);
          return;
        }
        else p=p->next;
      }
    }
  /*Segmentaion Fault if function called a second time....Also this is using up machine cycles doind multiple copying
    if(n==p->roll||flag==2)
    { p->roll=p->next->roll;
      strcpy(p->nam,p->next->nam);
      p->per=p->next->per;
      p->next=p->next->next;
      flag=2;
    }*/
    else t++;
  }
}
//-----------------------------------------------------------------------------------------
void del_tail()
{ for(p=base;p!=NULL;p=p->next)
    if(p->next->next==NULL)
    { free(p->next->next);
      p->next=NULL;
    }
}
//-----------------------------------------------------------------------------------------
void ins_head()
{ p=(struct stud*)malloc(sizeof(struct stud));
  printf("Student 0 : Roll no :");
  scanf("%d",&p->roll);
  printf("\t    Name :");
  scanf(" %[^\n]s",p->nam);
  printf("\t    Percentage : ");
  scanf("%f",&p->per);
  p->next=base;
  base=p;
  printf("We will now be printing data\n");
}
//-----------------------------------------------------------------------------------------
void ins_itm(int n)
{ for(p=base;p!=NULL;p=p->next)
  { if(n==p->roll)
    { q=(struct stud*)malloc(sizeof(struct stud));
      q->next=p->next;
      printf("Student new : Roll no :");
      scanf("%d",&q->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",q->nam);
      printf("\t    Percentage : ");
      scanf("%f",&q->per);
      p->next=q;
      printf("We will now be printing data\n");
      return;
    }
    else continue;
  }
}
//-----------------------------------------------------------------------------------------
void sort()
{ int ch1;
  char ch2;
  q=(struct stud*)malloc(sizeof(struct stud));
  r=(struct stud*)malloc(sizeof(struct stud));
  printf("To sort by\n1.Roll no\n2.Name\n3.Percentage\n>>");
  scanf("%d",&ch1);
  printf("Type 'a' for ascending and 'd' for descending : ");
  scanf(" %c",&ch2);
  if(ch2=='a')
  { switch(ch1)
    { case 1 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if((p->roll)>(q->roll))
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      case 2 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if(strcmp(p->nam,q->nam)>0)
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      case 3 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if((p->per)>(q->per))
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      default : printf("Wrong option..!\n");
                return;
    }
  }
  else if(ch2=='d')
  { switch(ch1)
    { case 1 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if((p->roll)<(q->roll))
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      case 2 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if(strcmp(p->nam,q->nam)<0)
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      case 3 : for(p=base;p!=NULL;p=p->next)
               { for(q=p->next;q!=NULL;q=q->next)
                 { if((p->per)<(q->per))
                   { r->roll=p->roll;
                     p->roll=q->roll;
                     q->roll=r->roll;
                     strcpy(r->nam,p->nam);
                     strcpy(p->nam,q->nam);
                     strcpy(q->nam,r->nam);
                     r->per=p->per;
                     p->per=q->per;
                     q->per=r->per;
                   }
                   else continue;
                 }
               }
               return;
      default : printf("Wrong option..!\n");
                return;
    }
  }
  else return;
}
//-----------------------------------------------------------------------------------------
void search()
{ int ch1, fl=0, roll;
  float per;
  char name[20];
  printf("Search by : \n1.Roll no\n2.Name\n3.Percentage\n>>");
  scanf("%d",&ch1);
  switch(ch1)
  { case 1 : printf("Enter the roll no : ");
             scanf("%d",&roll);
             for(p=base;p!=NULL;p=p->next)
             { if(p->roll==roll)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
             }
             if(fl==0)
               printf("Data not available!\n");
             return;
    case 2 : printf("Enter the Name :");
             scanf(" %[^\n]s",name);
             for(p=base;p!=NULL;p=p->next)
             { 
               if(strcmp(p->nam,name)==0)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
             }
             if(fl==0)
               printf("Name not Found!\nCheck the spelling and try again\n");
             return;
    case 3 : printf("Enter the percentage : ");
             scanf("%f",&per);
             for(p=base;p!=NULL;p=p->next)
             { if(p->per==per)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
             }
             if(fl==0)
               printf("Data not available!\n");
             return;
    default : printf("Wrong option!\n");
              return;
  }
}  
//------------------------------------------------------------------------------------------
void replace(int r)
{ int fl=0;
  for(p=base;p!=NULL;p=p->next)
  { if(p->roll==r)
    { printf("\n %d | ",p->roll);
      printf("%s",p->nam);
      printf(" | %f |\n",p->per);
      fl=2;
      printf("This is the information you will be replacing\n");
      printf("Student n : Roll no :");
      scanf("%d",&p->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",p->nam);
      printf("\t    Percentage : ");
      scanf("%f",&p->per);
    } 
    if(fl==0)
      printf("Data not available!\n");
    return;
  }
}
//-----------------------------------------------------------------------------------------
void disp()
{ for(p=base;p!=NULL;p=p->next)
  { printf(" %d | ",p->roll);
    printf("%s",p->nam);
    printf(" | %f |\n",p->per);
  }
}
//-----------------------------------------------------------------------------------------
void main()
{ int ch2;
  char ch1;
  printf("Enter student details\n");
  int t=0;
  do
  { if(base==NULL)
    { base=(struct stud*)malloc(sizeof(struct stud));
      printf("Student %d : Roll no :", t++);
      scanf("%d",&base->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",base->nam);
      printf("\t    Percentage : ");
      scanf("%f",&base->per);
      base->next=NULL;
      p=base;
    }
    else
    { p->next=(struct stud*)malloc(sizeof(struct stud));
      p=p->next;
      printf("Student %d : Roll no :", t++);
      scanf("%d",&p->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",p->nam);
      printf("\t    Percentage : ");
      scanf("%f",&p->per);
      p->next=NULL;
    }
    printf("Do you wish to continue entering? (y=yes||n=no)\n");
    scanf(" %c",&ch1);
/*    if(ch=='y'||ch=='Y')
      t++;
    else
      printf("We are done with that..\n");*/
  }while(ch1=='y'||ch1=='Y');
  printf("We will now be printing data\n");
  printf("Roll no |Name | \% |\n");
/*  p=base;
  for(i=0;i<=t;i++)
  { if(p->roll<10)
      printf("\t0%d|",p->roll);
    else
      printf("\t%d|",p->roll);
    for(j=0;;j++)
    { printf("%c",p->nam[j]);
      if(p->nam[j]=='\0')
        break;
    }
    while(j<22)
    {  printf(" ");
       j++;
    }
    printf("| %f |\n",p->per);
    p=p->next;
  }*/
  disp();
  do
  { printf("Do you wish to :\n1.Delete base data\n2.Delete a data\n3.Delete last data\n4.Insert new first data\n");
    printf("5.Insert a data\n6.Sort before displaying\n7.Search\n8.Update student data\n>>");
    scanf("%d",&ch2);
    switch(ch2)
    { case 1 : del_head();
               disp();
               break;
      case 2 : printf("Enter roll no of student to delete\n");
               scanf("%d",&t);
               del_itm(t);
               disp();
               break;
      case 3 : del_tail();
               disp();
               break;
      case 4 : ins_head();
               disp();
               break;
      case 5 : printf("Enter roll no after which u want to insert data\n");
               scanf("%d",&t);
               ins_itm(t);
               disp();
               break;
      case 6 : sort();
               disp();
               break;
      case 7 : search();
               break;
      case 8 : printf("Enter roll no of student you want to update\n");
               scanf("%d",&t);
               replace(t);
               break;
      default : printf("Wrong option.!\n");
                break;
    }
    printf("Do you wish to do more operations? (y=yes||n=no)\n");
    scanf(" %c",&ch1);
  }while(ch1=='y'||ch1=='\n');
}
  
  
