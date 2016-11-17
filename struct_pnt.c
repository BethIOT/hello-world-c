#include<stdio.h>
#include<string.h>
struct stud
{  char nam[10];
   int roll;
   float per;
}p,q,r;
void main()
{ int i;
  struct stud *s1,*s2,tmp;
  s1=(struct stud*)malloc(1*sizeof(struct stud)); // without this statement we would get segmentation fault
  s2=(struct stud*)calloc(1,sizeof(struct stud)); // tried it by assigning to normal variable also
  printf("Roll no I:");
  scanf("%d",&s1->roll);
  printf("Name I:");
  scanf(" %[^\n]s",s1->nam);
  printf("perc I:");
  scanf("%f",&s1->per);
  printf("Roll no II:");
  scanf("%d",&s2->roll);
  printf("Name II:");
  scanf(" %[^\n]s",s2->nam);
  printf("perc II:");
  scanf("%f",&s2->per);
  if(s1->roll<s2->roll)
  { tmp=*s1;
    s1=s2;
    s2=&tmp;
  }
  printf(" %d || %d\n",s1->roll,s2->roll);
  printf(" %s || %s\n",s1->nam,s2->nam);
  printf(" %f || %f\n",s1->per,s2->per);
}
