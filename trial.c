#include<stdio.h>
#include<string.h>
void main()
{ int t;
  char a[20], b[20];
  gets(a);
  gets(b);
  t=strcmp(a,b);
  printf("%d\n",t);
}
