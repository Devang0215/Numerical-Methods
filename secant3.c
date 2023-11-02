//Write a program in C to solve x3  -  3x  + 1.06 = 0 using the 
//Secant Method. 
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) ((x) * (x) * (x) - 3 * (x) + 1.06) // defining the function in macro form


int main ()
{
  double x, fx, fx1, xn, error_tolerance;
  int i = 1;
  printf ("\n Enter the value of X :  ");
  scanf ("%lf", &x);    // taking the xn as input 
  printf ("\n Enter the value of Xn-1 :  ");
  scanf ("%lf", &xn);      // taking the value of xn-1 as the input
  printf ("\n please enter error tolerance: ");
  scanf ("%lf", &error_tolerance);  //taking the tolerance value
  printf
    ("\n------------------------------------------------------------------\n");
  printf ("N\tXn-1\t\tXn\t\tXn+1");
  printf
    ("\n------------------------------------------------------------------\n");


  do
    {
      fx = f (x);    // calculating the f(x) by calling the macro function  
      fx1 = ((f (x) - f (xn)) / (x - (xn))); //calculating the fx1 by calling macro
      xn = x;           // upadating Xn-1
      x -= fx / fx1;        //computing the new value of x i.e Xn+1

      printf ("\n%d\t%lf\t%lf\t%lf\t",i, xn, x,x); //printing the value in  row wise 

      i++; // for printing the number of iteration
    }
  while (fabs (fx) > error_tolerance);  // the loop will run till the   absolute value of the function is greater than the tolerance the value 

  printf
    ("\n-------------------------------------------------------------------\n");

  printf ("\n\tThe approximate root of the equation is  :  %lf \n", x); // printing the approximate value of root  

  return 0;
}
