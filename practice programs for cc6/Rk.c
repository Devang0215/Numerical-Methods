#include<stdio.h>
#include<stdlib.h>
#define f(x,y) (x-y)
#define h 0.1

int main()
{
    float yo=1,xo=0,ul,k1,k2,k3,k4;
    printf("Enter the upper limit  : ");
    scanf("%f",&ul);
    printf("\nX\tY");
    printf("\n%f\t%f",xo,yo);
    while(xo<ul)
    {
        k1 = h*f(xo,yo);
        k2 = h*f((xo+(h/2)),(yo+(k1/2)));
        k3 = h*f((xo+(h/2)),(yo+(k2/2)));
        k4 = h*f(xo+h,yo+k3);
        yo=yo + ((k1+(2*k2)+(2*k3)+k4)/6);
        xo=xo+h;
        printf("\n%f\t%f",xo,yo);
    } 
    printf("\nThe solution is  %f ",yo);
    return 0;
}