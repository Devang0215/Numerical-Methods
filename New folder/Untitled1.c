#include<stdio.h>

int main ()
{
  float a;
  int b;
  printf("Enter the float  number : ");
  scanf("%f",&a);
  printf("\nThe number in float is %f",a);
  b = (int)a;
   printf("\n Integr part of the number is  %d",b)	;
 return 0; 		
}

