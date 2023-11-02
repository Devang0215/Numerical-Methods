#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) ( (x*x*x)+(2*x)-2)
#define f1(x) ( (3*x*x) + 2)

int main()
{
        int i=0;
        float a,b,xn,tolerance;
        printf("\nEnter the value of a and b ");
            scanf("%f %f",&a,&b);
        printf("\nEnter the tolerance value  : ");
            scanf("%f",&tolerance);
        printf("\n---------------------------------------------------------------");
            printf("\nIter\txn\ta\tb\tf(a)\tf(b)\txn\tf(xn)");
        printf("\n---------------------------------------------------------------");
            xn=a;
        do
        {
            printf("\n%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",i,xn,a,b,f(a),f(b),xn,f(xn));
            xn=a - ((a-b)/(f(a)-f(b))) * f(a);
            if(f(a)*f(xn) < 0)
                b=xn;
            else
                a=xn;
            i++;
} while (fabs(f(xn)) > tolerance );
printf("\n-----------------------------------------------------------------");
    printf("\n\tThe real root of the equation is  :  %.3f",xn);        
printf("\n---------------------------------------------------------------");
  return 0;
}
