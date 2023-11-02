#include<stdio.h>
#include<math.h>
#define PI 3.142857
 
double f(double x)
{ 
  return 1/(1+(x*x));
}
 
void trapezoidal (int n, double a, double b, double h);
void simpson(int n, double a, double b, double h);
void error(double res);
 
int main()
{
 	int n, ch;
  	double a,b,h,x,sum=0,integral;
  	printf("\nEnter the no. of intervals(should be even): ");
  	scanf("%d",&n);
  	printf("\nEnter the lower limit: ");
  	scanf("%lf",&a);
  	printf("\nEnter the upper limit: ");
  	scanf("%lf",&b);
  	h=fabs((b-a)/n);
  	printf("\nWhich method do you want to use? ");
  	printf("\nFor Simposon's 1/3rd method PRESS 1");
  	printf("\nFor trapezoidal method PRESS 2");
  	printf("\nEnter your choice: ");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  		case 1:
		  {
		  	simpson(n,a,b,h);
			break;
		  }
		case 2:
		{
			trapezoidal(n,a,b,h);
			break;
		}
		default:
		{
			printf("Wrong Input!!");
			break;
		}
	  }
  	
}
 
void simpson(int n, double a, double b, double h)
{
  int i;
  double x,sum=0,res;
  for(i=1;i<n;i++)
  {
    x=a+(i*h);
    if(i%2==0)
	{
      sum=sum+2*f(x);
    }
    else
	{
      sum=sum+4*f(x);
    }
  }
  res=(h/3)*(f(a)+f(b)+sum);
  printf("\nThe integral is: %lf\n",res);
  error(res);
}

void trapezoidal (int n, double a, double b, double h)
{
	int i;
	double x,sum=0,res,e;
  	for(i=1;i<n;i++)
  	{
    	x=a+(i*h);
      	sum=sum+2*f(x);
  	}
  	res = (h/2)*(f(a)+f(b)+sum);
  	printf("\nThe integral is: %lf\n",res);
  	error(res);
}

void error(double res)
{
	double e;
	e=((PI/4)-res)/(PI/4);
	printf("\nThe error in this method is: %lf",e);
}