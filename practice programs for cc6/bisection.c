#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ((x*x*x)-(3*x)+1.06)
int main()
{
    int i=0;
    float a,b,c,tolerance ;
    printf("\nEnter the value of a and b  :  ");
    scanf("%f %f",&a,&b);
    printf("\nThe value of f(%f) = %.4f\t f(%f) = %.4f ",a,f(a),b,f(b));
    printf("\nEnter the tolerance value  :  ");
    scanf("%f",&tolerance);
    if(!(f(a) * f(b)) < 0)
    {
       while(!(f(a) * f(b)) < 0)
       {
            printf("\nf(a) * f(b) should be < 0");
            printf("\nPlease eneter the value of  a and b again : ");
            scanf("%f %f",&a,&b);
       }  
    }
    printf("\n-----------------------------------------------");
    printf("\nIter\ta\tf(a)\tb\tf(b)\tc\tf(c)");
    printf("\n-----------------------------------------------");
    do
    {
        c= (a+b)/2;
        printf("\n%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f",i,a,f(a),b,f(b),c,f(c));
        if(f(a)*f(c) < 0)
        b=c;
        else
        a=c;
    	i++;
    } while (fabs(f(c)) > tolerance );
    printf("\n-----------------------------------------------");
    printf("\n\tThe root of the equation is : %.4f",c);
    printf("\n-----------------------------------------------");
    
}
