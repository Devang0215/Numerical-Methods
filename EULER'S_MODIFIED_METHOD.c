/*Write a C program to compute y for x=0.1 by Euler Modified Method, Correct up to five significant figures, taking step length h=0.05
dy/dx = ( y + x) with initial condition y=1 at x=0
*/

#include<stdio.h>
#define f(x,y) ( y + x )

int main()
{
	double ul,h,x=0,y=1,yn,xn=0,yn1;
	printf("\n\t Enter the upper limit  :  ");
	scanf("%lf",&ul);
	printf("\n\t Enter the step size ( h ) :   ");
	scanf("%lf",&h);
	printf("\n\tX\t\tY");
	printf("\n");
	printf("----------------------------------");
	yn = y + h * f(x,y);
	printf("\n\t%lf\t%lf",x,yn);
	while(xn < ul)
	{
		xn = xn + h;
		yn1 = y + ((h / 2) * ( f(x,y) + f(xn,yn) ));
		yn=yn1;
		printf("\n\t%lf\t%lf",xn,yn);
		
	}
	printf("\n");
	printf("-----------------------------------");
	printf("\n\tThe Solution  :      %lf ",yn1);	
	return 0;
}
