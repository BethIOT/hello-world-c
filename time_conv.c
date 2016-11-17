#include<stdio.h>
void main()
{  char ch;
   int hr, min, sec, tot;
   printf("Welcome to TIME CONVERSION : \n");
   printf("If you wish to enter seconds data; enter 's' :\n");
   printf("If you wish to enter hours, minutes and seconds data; enter 'h' :\n");
   ch=getchar();
   switch(ch)
   { case 'h' : printf("hours : ");
   		      scanf ("%d",&hr);
   			 printf("minutes : ");
   			 scanf ("%d",&min);
   			 printf("seconds : ");
   			 scanf ("%d",&sec);
   			 tot=0;
   			 tot+=sec;
   			 tot=tot+(min*60);
   			 tot=tot+(hr*3600);
   			 printf("Total Seconds : %d",tot);
   			 break;
   	case 's' : printf("Total Seconds : ");
   			 scanf ("%d",&tot);
   			 hr=tot/3600;
   			 tot=tot%3600;
   			 min=tot/60;
   			 tot=tot%60;
   			 sec=tot;
   			 printf("Is equivalant to %dhr %dmin %dsec",hr, min, sec);
   			 break;
     default : printf("You have not entered a valid input! Please try later");
               break;
   }
   printf("\n");
}
   			   
