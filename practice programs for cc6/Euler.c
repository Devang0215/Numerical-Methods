#include<stdio.h>
#define h 0.01
double f(double x,double y)
{
    double q;
    q=(y-x)/(y+x);
    return q;
}
int main()
{
    double yn=1,xn=0,ul;
    printf("\nEnter the upper limit  : ");
    scanf("%lf",&ul);
    printf("\n------------------------------------------");
    printf("\nX\t\tY");
    printf("\n------------------------------------------");
    printf("\n%lf\t%lf",xn,yn);
    do
    {   xn+=h;
        yn+=(h*f(xn,yn));
        printf("\n%lf\t%lf",xn,yn);
    }while(xn<ul);
    return 0;
    
}