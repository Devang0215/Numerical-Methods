
//In how many steps the square root of 3 converges if we 
//solve using Newton Raphson Method . 
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x) * (x)  - 3) // defining the function in macro form
#define f1(x) (2 * (x))     // defining the derivative of the function in macro form
 
int main()
{
    double x,fx,fx1,error_tolerance;
    int i = 1;
    printf("\n Enter the value of x :  ");
    scanf("%lf",&x);  // taking the x as input 
    printf("\n please enter error tolerance: ");
    scanf("%lf",&error_tolerance); //taking the tolerance value
    printf("\n------------------------------------------------------------------\n");
    printf("N\tXn\t\tf(Xn)\t\tf'(Xn)\t\tXn+1");
    printf("\n------------------------------------------------------------------\n");
   
   
    do
    {
        fx = f(x);// calculating the f(x) by calling the macro function  
        fx1 = f1(x);        //calculating the fx1 by calling macro
        if(fx1 == 0)   // if the f1(x) is equal to 0 then the roots will be undefined 
        {
            printf("\n please input another value of x : ");  // to re input the valu of  x
            break;
        }
        x -= fx/fx1; //computing the new value of x i.e Xn+1
        printf("\n%d\t%lf\t%lf\t%lf\t%lf\t",i,x,fx,fx1,x);//printing the value in  row wise
        i++;            
    }while(fabs(fx)  > error_tolerance); // the loop will run till the   absolute value of the function is greater than the tolerance the value 
   
    printf("\n-------------------------------------------------------------------\n");
   
    printf("\n\tThe approximate root of the equation is  :  %lf \n",x);// printing the approximate value of root
       
return 0;
}


