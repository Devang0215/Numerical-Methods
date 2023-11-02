#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x) * (x)* (x) + 2 * (x) - 2)

int main()
{
	 float a,b,c,tolerance;
	 int i = 1;
	 do{
	 printf("\nEnter the value of a: ");
	 
	 scanf("%f",&a); //entering the value of  a
	 
	 printf("\nEnter the value of b: ");
	 
	 scanf("%f",&b); // entering the value of b
	 
	 printf("\nEnter the tolerance value : ");
	  
	 scanf("%f",&tolerance); //entering the tolerance value
	 
	}while( f(a) * f(b) > 0 );
	
	printf("\n\t---------------------------------------------------------------------------------------------------------------------------\n");

	printf("\n	N	Xn		An		Bn		f(An)		f(Bn)		X(n+1)		f(X(n+1))");

	printf("\n\t--------------------------------------------------------------------------------------------------------------------------\n");
	
	a = c;
	/*calculating the  root */
	do{
		
		printf("\n\t%d\t%f\t%f\t%f\t%f\t%f\t%f\t%f",i,c,a,b,f(a),f(b),c,f(c));
		
		c = a - ((a - b) / ( f(a) - f(b) )) * f(a);
		
		if( f(a) * f(c) < 0)
		b = c;
		
		else
		a = c;
		
		i++;
	}while( fabs( f(c) ) > tolerance);

	printf("\n\t------------------------------------------------------------------------------------------------------------------------\n");
	
	printf("\n\nThe approximate root of the equation is :  %g",c); //printing the root

return 0;
}

