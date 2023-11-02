
//In how many steps the square root of 3 converges if we 
//solve using Newton Raphson Method . 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x) * (x)  - 3)
#define f1(x) (2 * (x))
 
int main()
{
    double x,fx,fx1,xn,res,error_tolerance;
    int option;
	printf("\n********MENU**************");
	printf("\n 1. To implement secant method");
	printf("\n 2. To implement Newton raphson method");
	printf("\n 3. To EXIT");
	printf("\n ENTER YOUR CHOICE >>>>>>>>>>>>>>>>>");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			
		case 2;
		
		case 
	}
    int i = 1;
    printf("\n Enter the value of x :  ");
    scanf("%lf",&x);
    printf("\n please enter error tolerance: ");
    scanf("%lf",&error_tolerance);
    printf("\n------------------------------------------------------------------\n");
    printf("N\tXn\t\tf(Xn)\t\tf'(Xn)\t\tXn+1");
    printf("\n------------------------------------------------------------------\n");
   
   
    do
    {
        fx = f(x);
        fx1 = f1(x);        
        if(fx1 == 0)
        {
            printf("\n please input another value of x : ");
            break;
        }
        x -= fx/fx1;
        printf("\n%d\t%lf\t%lf\t%lf\t%lf\t",i,x,fx,fx1,x);
        i++;            
    }while(fabs(fx)  > error_tolerance);
   
    printf("\n-------------------------------------------------------------------\n");
   
    printf("\n\tThe approximate root of the equation is  :  %lf \n",x);
       
return 0;
}


