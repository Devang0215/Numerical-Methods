#include<stdio.h>
#include<stdlib.h>
#define f(x,y) ( y + x )
#define h 0.05
int main()
{
     float ul,y=1,x=0,yn,xn;
     printf("enter the upper limit  :  ");
     scanf("%f",&ul);
     printf("\nX\tY");
     yn=y+h *f(x,y);
     printf("\n%.3f\t%.3f",x,yn);
     while(xn<ul)
     {
        xn=xn+h;
        yn=y+((h/2) * (f(x,y)+f(xn,yn)));
        printf("\n%.3f\t%.3f",x,yn);
     }
     printf("\n\tThe solution :   %f",yn);
     return 0;
}