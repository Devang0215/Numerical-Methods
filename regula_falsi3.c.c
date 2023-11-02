//Write a program in C to solve x3  -  3x  + 1.06 = 0 using the 
//Secant Method. 
//Regula Falsi Method

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x) * (x) * (x) - 3 * (x) + 1.06) // defining the function in  macro

int main()
{
	 float a,b,c,tolerance;
	 int i = 1;
	 do{
	 printf("\nEnter the value of a: ");
	 
	 scanf("%f",&a); // taking lower value as input
	 
	 printf("\nEnter the value of b: ");
	 
	 scanf("%f",&b); // taking the upper value  as input
	 
	 printf("\nEnter the tolerance value : ");
	 
	 scanf("%f",&tolerance); // taking the  tolerance value as the input
	 
	}while( f(a) * f(b) > 0 );  // it will take input till the condition   is true 
	
	printf("\n\t---------------------------------------------------------------------------------------------------------------------------\n");

	printf("\n	N	Xn		An		Bn		f(An)		f(Bn)		X(n+1)		f(X(n+1))");

	printf("\n\t--------------------------------------------------------------------------------------------------------------------------\n");
	
	a = c;
 
	do{
		
		printf("\n\t%d\t%f\t%f\t%f\t%f\t%f\t%f\t%f",i,c,a,b,f(a),f(b),c,f(c));
		
		c = a - ((a - b) / ( f(a) - f(b) )) * f(a); // calculating new value of x 
		
		if( f(a) * f(c) < 0)   // if the product of f(a) * f(c) < 0
		b = c; 					// then the value of b is replace by the new value of x 
		
		else
		a = c;                 // else the value of a is replace by the new value of x  
		
		i++;					// for printing the number of iteration
	}while( fabs( f(c) ) > tolerance);  // the loop will run  till the  absolute value of the function is  greater than the tolerance

	printf("\n\t------------------------------------------------------------------------------------------------------------------------\n");
	
	printf("\n\nThe approximate root of the equation is :  %g",c);  //printing the  approximate  value of root
}
