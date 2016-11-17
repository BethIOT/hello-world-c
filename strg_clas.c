#include<stdio.h>
int add(int p, int q, int r)
{ static int a=0;
  auto int sum=a+p+q+r;
  a+=5;
  return sum;
}
void main()
{ int b,c,i=0;
  extern int ro; // from "extern_smpl.c" 
  scanf("%d%d",&b,&c);
  for(i=0;i<5;i++)
    printf("Sum : %d\n",add(b,c,ro));
}
