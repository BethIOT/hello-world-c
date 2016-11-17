#include<stdio.h>
enum day {mon=10,tue,wed=20,thu,fri=30,sat,sun};
void main()
{ enum day today=mon;
  if(today==mon)
  printf("%d\n",today+=11);//‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘unsigned int’
  if(today==thu)
    printf("True\n");
  else printf("False\n");  
}
