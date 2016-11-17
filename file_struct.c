#include<stdio.h>
#include<string.h>
struct emp
{ char nam[20];
  int age, id, sal;
}e;
void main()
{ char ch;
  FILE *k;
  k=fopen("emp_db.txt","a+");
  printf("Enter employee details :\n");
  do
  { printf("Enter id :");
    scanf("%d",&e.id);
    printf("Enter name :");
    scanf(" %[^\n]s",e.nam);
    printf("Enter age :");
    scanf("%d",&e.age);
    printf("Enter Payscale :");
    scanf("%d",&e.sal);
    fprintf(k,"%d--%s--%d--%d\n",e.id,e.nam,e.age,e.sal);
    printf("Do you want to enter more ? (y=yes||n=no)");
    scanf(" %c",&ch);
  }while(ch=='y');
  rewind(k);
  printf("\n\nThese are the employees enrolled :\n");
  while((ch=getc(k))!=EOF)
    printf("%c",ch);
  fclose(k);
}
