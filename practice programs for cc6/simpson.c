#include<stdio.h>
#include<stdlib.h>
#define f(x) (1/(1+(x*x)))

int main()
{
    	int n,i;
        float h,a,b,y0,yn,I,oddsum=0.0,evensum=0.0,k;
        printf("Enter the lower limit  : ");
        scanf("%f",&a);
        printf("Enter the upper limit  : ");
        scanf("%f",&b);
        printf("Enter the value of sub intervals  : ");
        scanf("%d",&n);
        h=(b-a)/n;
        y0=f(a);
        yn=f(b);
         k=a+h;
        for(i=1;i<=n-1;i+2)
        {
            oddsum += f(k);
            k += (2*h);

        }
        k=a+(2*h);
        for(i=2;i<=n-2;i+2)
        {
            evensum += f(k);
            k += (2*h);
        }
        I=(h/3)*(y0+yn+ (4*oddsum)+(2*evensum));
        printf("\nYour integrated value is %f",I);                                        
    return 0;
}