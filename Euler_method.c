//Write a C program to compute y for x=0.1 by Euler method,correct upto five significant figures,taking step length=0.02,with 
//initial condition y=1 at x=0
//dy/dx=(y-x)/(y+x)
#include<stdio.h>

#define h 0.01
double f(double x,double y)
{
	double q;
	 q = (y-x)/(y+x);
	 return q;
}
int main()
{
	double i,yn=1,xn=0,um;
	printf("Enter the upper limit : ");
	scanf("%lf",&um);
	printf("X\t\tY");
	printf("\n");
	printf("----------------------");
	printf("\n%lf\t%lf",xn,yn);
	while(xn < um)
	{
		
		xn = xn + h;
		yn = yn  + (h *f(xn,yn)); 
		printf("\n%lf\t%lf",xn,yn);
		
	}
	printf("\n");
	printf("----------------------");
	printf("\n\tThe Solution  :      %lf ",yn);
	return 0;
}

