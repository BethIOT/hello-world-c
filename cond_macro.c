#include<stdio.h>
#include<stdlib.h>
#define pi 3.1415926535897
#define r 15
#ifndef r
#define r 20
#elif r==15
#define r 30
#else 
#define r 15 
#endif
#define ar pi*r
void main()
{ printf("%f, %d, %f\n",ar,r,pi);
}
