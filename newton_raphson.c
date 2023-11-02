//Write a program to find out the value of sqrt(2) using Newton-Raphson method.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x) * (x)  - 2)
#define f1(x) (2 * (x))

int main()
{
	double x,fx,fx1,res,dif, error_tolerance;
	int i = 1;
	printf("\n Enter the value of x :  ");
	scanf("%lf",&x);
	printf("\n please enter error tolerance: ");
	scanf("%lf",&error_tolerance);
	printf("\n------------------------------------------------------------------\n");
	printf("N\tXn\t\tf(Xn)\t\tf'(Xn)\t\tXn+1");	
	printf("\n------------------------------------------------------------------\n");
	
	
	do
	{
		fx = f(x);
		fx1 = f1(x);		
		if(fx1 == 0)
		{
			printf("\n please input another value of x : ");
			break;
		}
		x -= fx/fx1;
		printf("\n%d\t%lf\t%lf\t%lf\t%lf\t",i,x,fx,fx1,x);
		i++;			
	}while(fabs(fx)  >= error_tolerance);
	
	printf("\n-------------------------------------------------------------------\n");
	
	printf("\n\tThe approximate root of the equation is  :  %lf \n",x);
		
return 0;
}

