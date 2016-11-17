#include<stdio.h>
#include"num_names.c"
void main()
{ int i=0,s[8]={0};
//  extern int to; // from "extern_smpl.c"
  printf("Enter 8 terms using only (0-9/10-19/20/30/40/50/60/70/80/90) :\n");
  for(i=0;i<8;i++)
    scanf("%d",&s[i]);
//    s[i]=to;
  printf("\nThe number name is :\n");
   for(i=7;i>=0;i--)
   {  name(s[i]); 
      if(i==2||i==5||i==8||i==11)
        if(s[i]!=0)
            hun();
        else continue;
      if(i==9)
         bil();
      if(i==6)
         mil();
      if(i==3)
         ths();
   }
   printf("only\n");
}

