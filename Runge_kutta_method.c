//Write a C program to compute y for x=0.4 by Runge Kutta Method, Correct up to six significant figures, taking step length h=0.1dy/dx = (x-y) with initial condition y=1 at x=0
//Runge  kutta method
#include<stdio.h>
#define f(x,y)  ( x - y )

int main()
{
	double yo=1,xo=0,ul,h,k1,k2,k3,k4;
	
	printf("Enter the step size  : ");
	scanf("%lf",&h);
	printf("Enter the upper limit : ");
	scanf("%lf",&ul);
	printf("\n\tX\t\tY");
	printf("\n******************************************************************");
	printf("\n\t%lf\t%lf",xo,yo);
	while( xo < ul )
	{
		
		k1= h* f(xo,yo);
		k2= h* f((xo+(h/2)),(yo+(k1/2)));	
		k3= h* f((xo+(h/2)),(yo+(k2/2)));	
		k4= h* f((xo+h),(yo+k3));
		yo= yo + ((k1+(2*k2)+(2*k3)+k4)/6);
		xo+=h;
		printf("\n\t%lf\t%lf",xo,yo);
	}
	printf("\n******************************************************************");
	printf("\n\tThe solution  is  : %lf",yo);	
	return 0;
}

