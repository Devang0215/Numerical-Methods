#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ( (x*x*x)+(2*x)-2)

int main()
{
    int i=0;
    float xo,x,xn,tolerance;
    printf("\nEnter the value of xn-1 :  ");
    scanf("%f",&xo);
    printf("\nEnter the value of xn  : ");
    scanf("%f",&x);
    printf("\nEnter the tolerance value : ");
    scanf("%f",&tolerance);
    printf("\n---------------------------------------------");
    printf("\nIter\txn-1\tx\txn+1");
    printf("\n---------------------------------------------");
    do
    {
        xn=x-((x-xo)/(f(x)-f(xo)))*f(x);
        printf("\n%d\t%.3f\t%.3f\t%.3f",i,xo,x,xn);
        xo=x;
        x=xn;
        i++;
    } while (fabs(f(xn))>tolerance);
    printf("\n---------------------------------------------");
    printf("\n\tThe real root of the equation is  : %.3f ",xn);
    printf("\n---------------------------------------------");

}