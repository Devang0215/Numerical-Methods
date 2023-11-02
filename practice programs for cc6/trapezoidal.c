#include<stdio.h>
#include<stdlib.h>
#define f(x) (1/(1+(x*x)))

int main()
{
    int n,i;
    float h,a,b,y0,yn,I,sum=0.0,k;
    printf("Enter the value of lower limit  : ");
    scanf("%f",&a);
    printf("Enter the value of upper limit : ");
    scanf("%f",&b);
    printf("Enter the number of intervals  : ");
    scanf("%d",&n);
    h=(b-a)/n;
    y0=f(a);
    yn=f(b);
    for(i=1;i<n;i++)
    {
        a=a+h;
        sum=sum+f(a); 
    }
    I = ((h*(y0+yn))/2) + (h*sum);
    printf("your integrated value is  : %f",I);
    return 0;

}
