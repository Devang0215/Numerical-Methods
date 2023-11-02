#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define pi 0.78539816339

#define f(x)  (1 / (1 + (x * x)))
int main()
{
	double i,a,b,h,s = 0.0,g,m,f=0.0,rel;
    double t = 0.0,ig,k;
	int n,choice;
	
	printf("\n\tEnter the value  of  a  : ");
	
	scanf("%lf",&a);
	
	printf("\n\tEnter the value  of  b  : ");
	
	scanf("%lf",&b);
	
	printf("\n\tEnter the step size  : ");
	
	scanf("%d",&n);
    
	printf("\n\t*************MENU***************\n");
    printf("\n\t1. To Perform Trapezoidal method : \n");
    printf("\n\t2. To Perform Simpson's 1/3 rd  method : \n");
    printf("\n\t3. To Exit  : \n");
    printf("\n\t Enter your choice ................................ :  ");
	scanf("%d",&choice);
    switch (choice)
    {

        case 1:
            h = (b - a) / n;
            g = f(a);
            a = a + h;
            
            k = 1;
            do
            {
                f = f + f(a);
                
                a =  a + h;
                k++;

            }while(k!=n);
            i = h/2 *(g + f(b) + 2*f);
            printf("\n---------------------------------------------------");
            printf("\n\tThe integrated value is  : %lf",i);
            rel = ((pi) - i)/(pi);
            printf("\n---------------------------------------------------");
            
            printf("\n\tThe relative percentage error is  : %lf\n\n",rel);
        break;
        case 2 :
            m = (b - a) / n;
            k = a + m;
            for(i=1;i<=(n-1);i=i+2)
            {
                s = s +f(k);
                k =k+(2*m);
                
            }

            k = a+(2*m);
            for(i=2;i<=(n-2);i=i+2)
            {
                t = t + f(k);
                k = k + (2 * m);
                
            }
        
            ig = (m/3) * (f(a) + f(b) + (4 * s) + (2 * t));

            printf("\n---------------------------------------------------");
            
            printf("\n\tThe integrated value is  : %lf",ig);

            rel = ((pi) - ig)/(pi);
            printf("\n---------------------------------------------------");
            printf("\n\tThe relative percentage error is  : %lf\n\n",rel);
        break;
        case 3:
            exit(1);
            break;
        default :
            printf("\nInvalid option .....................! ");
            break;   
    }
    
return 0;	
}