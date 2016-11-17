#include<stdio.h>
void main()
{  char a[10];
int i;
   printf("Enter 10 character to be fed into an array:");
   for(i=0; i<10; i++)
      a[i]=getchar(); // When u press 'return' that is also taken by getchar as a character and stored into the array
    printf("These are the elements of the array:\n");
   for(i=0; i<10; i++)
      putchar(a[i]);
   printf("\n");
}
