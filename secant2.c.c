//Write a program to compute the real roots of the following non linear equation 
//by Secant Method: x3 +2x -2=0, correct up to 3 significant figures. 

#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) ((x) * (x) * (x) + 2 * (x) - 2)


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
