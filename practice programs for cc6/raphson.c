#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ( (x*x*x)-(8*x)-4 )
#define f1(x) ( (3*x*x)-8 )

int main()
{
    int i=0;
    float x,xn,error_tolerance;
    printf("Enter the value of x : ");
    scanf("%f",&x);
    printf("Enter the error tolerance :  ");
    scanf("%f",&error_tolerance);
    printf("\n--------------------------------------------------------");
    printf("\nIter\tx\tf(x)\tf'(x)\txnew");
    printf("\n--------------------------------------------------------");
    do
    {  if(f1(x)==0)
        {
        printf("\nPlease input another value of  x ");
        scanf("%f",&x);
        }
        x -= (f(x)/f1(x));
        xn=x;
        printf("\n%d\t%.3f\t%.3f\t%.3f\t%.3f",i,x,f(x),f1(x),xn);
        i++;
    } while (fabs(f(xn))>error_tolerance);
    printf("\n--------------------------------------------------------");
    printf("\n The root of the equation is %.3f  ",xn);
    printf("\n--------------------------------------------------------");
    return 0;
}