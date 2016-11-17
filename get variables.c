#include<stdio.h>
void main()
{ int a=0;
  float b=0.0;
  double c=0;
  char dep='r';
  printf("\n Enter an integer");
  scanf("%d", &a);
  printf("\n Enter a float value");
  scanf("%f", &b);
  printf("\n Enter a double value");
  scanf("%lf", &c);
  printf("\n Enter a char value");
  scanf(" %c", &dep); // MIND THE SPACE
  
  printf("\n These are the values you have fed to the system : ");
  printf ("\n This is the integer : %d", a);
  printf ("\n This is the float : %f", b);
  printf ("\n This is the double : %lf ", c);
  printf ("\n This is the character : %c \n", dep);
}
