//Write a program in C to solve x3  -  3x  + 1.06 = 0 using the 
//Secant Method. 
#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) ((x) * (x) * (x) - 3 * (x) + 1.06)


int main ()
{
  double x, fx, fx1, xn, error_tolerance;
  int i = 1;
  printf ("\n Enter the value of X :  ");
  scanf ("%lf", &x);
  printf ("\n Enter the value of Xn-1 :  ");
  scanf ("%lf", &xn);
  printf ("\n please enter error tolerance: ");
  scanf ("%lf", &error_tolerance);
  printf
    ("\n------------------------------------------------------------------\n");
  printf ("N\tXn\t\tf(Xn)\t\tf'(Xn)\t\tXn+1");
  printf
    ("\n------------------------------------------------------------------\n");


  do
    {
      fx = f (x);
      fx1 = ((f (x) - f (xn)) / (x - (xn)));
      xn = x;
      x -= fx / fx1;

      printf ("\n%d\t%lf\t%lf\t%lf\t%lf\t", i, x, fx, fx1, x);

      i++;
    }
  while (fabs (fx) > error_tolerance);

  printf
    ("\n-------------------------------------------------------------------\n");

  printf ("\n\tThe approximate root of the equation is  :  %lf \n", x);

  return 0;
}
