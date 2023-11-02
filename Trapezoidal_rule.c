#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x)  (1 / (1 + (x * x)))

int main()
{
	double a,b,h,s = 0.0,i,g,rel;
	int n,k,p;
	
	printf("\n\tEnter the value  of  a  : ");
	
	scanf("%lf",&a);
	
	printf("\n\tEnter the value  of  b  : ");
	
	scanf("%lf",&b);
	
	printf("\n\tEnter the step size  : ");
	
	scanf("%d",&n);
	
	printf("\n\tX\tf(x)");
	printf("\n------------------------------------------------------");

	h = (b - a) / n;

	g = f(a);
	
	printf("\n\t%lf\t%lf",a,g);

	
	a = a + h;
	
	k = 1;
	do
	{
	 	s = s + f(a);
		
		printf("\n\t%lf\t%lf",a,f(a));
		
		a =  a + h;
		
		k++;

	}while(k <= (n-1));
	
	printf("\n\t%lf\t%lf",a,f(b));  
	
	i = h/2 *(g + f(b) + 2*s);
	
	printf("\n---------------------------------------------------");
	 
	printf("\n\tThe integrated value is  : %lf",i);

	rel = ((3.142857/4) - i)/(3.142857/4);
	
	printf("\n---------------------------------------------------");
	
	printf("\n\tThe relative percentage error is  : %lf\n\n",rel);

return 0;	
}
