#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//--------------------------------------------------------------------------------
struct stud
{ int roll;
  char nam[20];
  float per;
  struct stud *next;
  struct stud *prev;
}*head=NULL,*foot=NULL,*p=NULL,*q=NULL,*r=NULL;
//--------------------------------------------------------------------------------
void disp()//Not different from single_linked list
{ printf("We will now be printing data\n");
  printf("Roll no |Name | \% |\n");
  for(p=head;p!=NULL;p=p->next)
  { printf(" %d | ",p->roll);
    printf("%s",p->nam);
    printf(" | %f |\n",p->per);
  }
}
//--------------------------------------------------------------------------------
void del_head()//One extra line
{ p=head->next;
  free(head);
  head=p;
  head->prev=NULL;
}
//-----------------------------------------------------------------------------------
void del_foot() //simpler than single link
{ p=foot->prev;
  free(foot);
  foot=p;
  foot->next=NULL;
}
//---------------------------------------------------------------------------------
void del_itm(int n) // for loop avoided
{ for(p=head;p!=NULL;p=p->next)
  { if(n==p->roll)
    { p=p->prev;
      p->next=p->next->next;
      p=p->next->next;
      p->prev=p->prev->prev;
      p=p->prev; // ???free(p->prev)????
      free(p);
    }
  }
}
//---------------------------------------------------------------------------------
void ins_head() // One extra line
{ p=(struct stud*)malloc(sizeof(struct stud));
  printf("Student 0 : Roll no :");
  scanf("%d",&p->roll);
  printf("\t    Name :");
  scanf(" %[^\n]s",p->nam);
  printf("\t    Percentage : ");
  scanf("%f",&p->per);
  p->prev=NULL;
  p->next=head;
  head->prev=p;
  head=p;
}
//-----------------------------------------------------------------------------------
void ins_foot() // New function
{ p=(struct stud*)malloc(sizeof(struct stud));
  printf("Student 0 : Roll no :");
  scanf("%d",&p->roll);
  printf("\t    Name :");
  scanf(" %[^\n]s",p->nam);
  printf("\t    Percentage : ");
  scanf("%f",&p->per);
  p->prev=foot;
  p->next=NULL;
  foot->next=p;
  foot=p;
}
//------------------------------------------------------------------------------------
void ins_itm(int n) // can use search algorithm here for faster result
{ for(p=head;p!=NULL;p=p->next)
  { if(n==p->roll)
    { q=(struct stud*)malloc(sizeof(struct stud));
      q->next=p->next;
      q->prev=p;
      printf("Student new : Roll no :");
      scanf("%d",&q->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",q->nam);
      printf("\t    Percentage : ");
      scanf("%f",&q->per);
      p->next=q;
      return;
    }
    else continue;
  }
}
//-------------------------------------------------------------------------------------
void sort() // Head used for ascending, tail used for decending, kepping the comparing same
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
    { case 1 : for(p=head;p!=NULL;p=p->next)
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
      case 2 : for(p=head;p!=NULL;p=p->next)
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
      case 3 : for(p=head;p!=NULL;p=p->next)
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
    { case 1 : for(p=foot;p!=NULL;p=p->prev)
               { for(q=p->prev;q!=NULL;q=q->prev)
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
      case 2 : for(p=foot;p!=NULL;p=p->prev)
               { for(q=p->prev;q!=NULL;q=q->prev)
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
      case 3 : for(p=foot;p!=NULL;p=p->prev)
               { for(q=p->prev;q!=NULL;q=q->prev)
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
  else return;
}
//------------------------------------------------------------------------------------
void search() // Half number of total search + Search last and first together
{ int ch1, fl=0, roll;
  float per;
  char name[20];
  printf("Search by :\n1.Roll no\n2.Name\n3.Percentage\n>>");
  scanf("%d",&ch1);
  switch(ch1)
  { case 1 : printf("Enter the roll no : ");
             scanf("%d",&roll);
             for(p=head,q=foot;;p=p->next,q=q->prev)
             { if(p->roll==roll)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
               else if(q->roll==roll)
               { printf("\n %d | ",q->roll);
                 printf("%s",q->nam);
                 printf(" | %f |\n",q->per);
                 fl=2;
               }
               else if(p->next==q) break;
               else if(p==q) break;
               else continue;
             }
             if(fl==0)
               printf("Data not available!\n");
             return;
    case 2 : printf("Enter the Name :");
             scanf(" %[^\n]s",name);
             for(p=head,q=foot;;p=p->next,q=q->prev)
             { if(strcmp(p->nam,name)==0)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
               else if(strcmp(q->nam,name)==0)
               { printf("\n %d | ",q->roll);
                 printf("%s",q->nam);
                 printf(" | %f |\n",q->per);
                 fl=2;
               }
               else if(p->next==q) break;
               else if(p==q) break;
               else continue;
             }
             if(fl==0)
               printf("Name not Found!\nCheck the spelling and try again\n");
             return;
    case 3 : printf("Enter the percentage : ");
             scanf("%f",&per);
             for(p=head,q=foot;;p=p->next,q=q->prev)
             { if(p->per==per)
               { printf("\n %d | ",p->roll);
                 printf("%s",p->nam);
                 printf(" | %f |\n",p->per);
                 fl=2;
               }
               else if(q->per==per)
               { printf("\n %d | ",q->roll);
                 printf("%s",q->nam);
                 printf(" | %f |\n",q->per);
                 fl=2;
               }
               else if(p->next==q) break;
               else if(p==q) break;
               else continue;
             }
             if(fl==0)
               printf("Data not available!\n");
             return;
    default : printf("Wrong option!\n");
              return;
  }
}
//------------------------------------------------------------------------------------
void replace(int r) // Half number of total search + Search last and first together
{ int fl=0;
  for(p=head,q=foot;;p=p->next,q=q->prev)
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
      return;
    }
    else if(q->roll==r)
    { printf("\n %d | ",q->roll);
      printf("%s",q->nam);
      printf(" | %f |\n",q->per);
      fl=2;
      printf("This is the information you will be replacing\n");
      printf("Student n : Roll no :");
      scanf("%d",&q->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",q->nam);
      printf("\t    Percentage : ");
      scanf("%f",&q->per);
      return;
    } 
    else continue;
  }
  if(fl==0)
      printf("Data not available!\n");
  return;
}
//------------------------------------------------------------------------------------
void main()
{ int ch2;
  char ch1;
  printf("Enter student details\n");
  int t=0;
  do
  { if(head==NULL)
    { head=(struct stud*)malloc(sizeof(struct stud));
      printf("Student %d : Roll no :", t++);
      scanf("%d",&head->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",head->nam);
      printf("\t    Percentage : ");
      scanf("%f",&head->per);
      head->prev=NULL;
      head->next=NULL;
      p=head;
    }
    else
    { p->next=(struct stud*)malloc(sizeof(struct stud));
      p->next->prev=p;
      p=p->next;
      printf("Student %d : Roll no :", t++);
      scanf("%d",&p->roll);
      printf("\t    Name :");
      scanf(" %[^\n]s",p->nam);
      printf("\t    Percentage : ");
      scanf("%f",&p->per);
      p->next=NULL;
    }
    foot=p;
    printf("Do you wish to continue entering? (y=yes||n=no)\n");
    scanf(" %c",&ch1);
  }while(ch1=='y'||ch1=='Y'); 
  disp();
  do
  { printf("Do you wish to :\n1.Delete first data\n2.Delete last data\n3.Delete a data\n4.Insert new first data\n");
    printf("5.Add more data\n6.Add data in between\n7.Sort before displaying\n8.Search\n9.Update student data\n>>");
    scanf("%d",&ch2);
    switch(ch2)
    { case 1 : del_head();
               disp();
               break;
      case 2 : del_foot();
               disp();
               break;
      case 3 : printf("Enter roll no of student to delete\n");
               scanf("%d",&t);
               del_itm(t);
               disp();
               break;
      case 4 : ins_head();
               disp();
               break;
      case 5 : ins_foot();
               disp();
               break;
      case 6 : printf("Enter roll no after which u want to insert data\n");
               scanf("%d",&t);
               ins_itm(t);
               disp();
               break;
      case 7 : sort();
               disp();
               break;
      case 8 : search();
               break;
      case 9 : printf("Enter roll no of student you want to update\n");
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
