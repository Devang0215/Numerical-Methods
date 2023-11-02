#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x)  (1 / (1 + (x * x)))

int main()
{
	double a,b,h,s = 0.0,t = 0.0,ig,g,k,rel;
	
	int n,i;
	printf("\n Enter the value  of lower  limit   a  : ");
	scanf("%lf",&a);
	printf("\n Enter the value  of upper limit   b  : ");
	scanf("%lf",&b);
	printf("\n Enter the number of  steps   : ");
	scanf("%d",&n);
	

	
	h = (b - a) / n;
	k = a + h;
	for(i=1;i<=(n-1);i=i+2)
	{
		 s = s +f(k);
		 k =k+(2*h);
	}

	k = a+(2*h);
	for(i=2;i<=(n-2);i=i+2)
	 {
		t = t + f(k);
		k = k + (2 * h);
	 }
	ig = (h/3) * (f(a) + f(b) + (4 * s) + (2 * t));

	printf("\n---------------------------------------------------");
	 
	printf("\n\tThe integrated value is  : %lf",ig);

	rel = ((3.142857/4) - ig)/(3.142857/4);
	printf("\n---------------------------------------------------");
	printf("\n\tThe relative percentage error is  : %lf\n\n",rel);
	
	
return 0;	
}
