//Write a program in C to determine one of the roots of the equation, 
//x³-3x+1.06=0 by bisection method. Input the error tolerance as 0.001. 
//Also print the number of operations.
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) x * x * x - 3 * x + 1.06

int main()
{
	float a,b,c,res,res1,res2,tolerance;
		int i = 1;
	do
	{
		printf("\n\tEnter the value of a : ");

		scanf("%f",&a);

		res = f(a);

		printf("\n\t f(%g) := %g",a,res);

		printf("\n\tEnter the value of b : ");

		scanf("%f",&b);

		res1 = f(b);

		printf("\n\t f(%g) := %g",b,res1);
	}while(res * res1 > 0);

	printf("\n\t Enter the tolerance value  :  ");

	scanf("%f",&tolerance);
	
	printf("\n\t------------------------------------------------------------\n");

	printf("\n	N	f(a)		f(b)		(a+b)/2		f(new)");

	printf("\n\t------------------------------------------------------------\n");

	do
	{
	c = (a + b) / 2;  // here  average value  is  taken
	res = f(a);			// calculating f(x) where x is the  first  value entered by  user 
	res1 = f(b);		// calculating f(x) where x is the second value entered by user 
	res2 = f(c);		// calculating f(x) where x is the average value calculated  
	printf("\n\t%d\t%f\t%f\t%f\t%f",i,res,res1,c,res2);		//printing the values row wise 
		if(res * res2 < 0)  // if the  product of the  "res " and  "res2" is  less than  zero 
		{
		b = c;			// then   b will be equal to the average value
		}
		else
		{
		a = c;			// else  a  will be equal to the average value 
		}
		i++;
	} while (abs(f(c)) < tolerance);

	printf("\n\t------------------------------------------------------------\n");
	
	printf("\n\nThe approximate root of the equation is :  %g",c);
	
	return 0;	
}
