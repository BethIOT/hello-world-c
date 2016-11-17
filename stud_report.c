#include<stdio.h>
void main()
{  int s1, s2, s3, tot=0;
   float per=0.0;
   printf("Enter marks of 3 subjects out of 100:\n");
   scanf ("%d%d%d",&s1,&s2,&s3);
   tot=s1+s2+s3;
   printf("total is %d\n", tot);
   per=(tot/3);
   printf("percentage is %lf\n", per);
   if(per<35.0)
     printf("Fail");  
   else if(per<49.0)
     printf("Pass");
   else if(per<59.0)
      printf("2nd Class");
   else if(per<69.0)
      printf("1st Class");
   else 
      printf("Above 1st class");
}
   
