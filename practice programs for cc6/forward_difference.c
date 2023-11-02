#include<stdio.h>

int main()
{
    int n,i,j,c;
    float x[10],y[10],arr[10][10];
    printf("Enter the no. of data you want to enter  :    ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of x[%d] : ",i);
        scanf("%f",&x[i]);
    }
    printf("Enter the no. of data you want to enter  :    ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value of y[%d] : ",i);
        scanf("%f",&y[i]);
    }
    // adding x and y value to the table 
    for(i=0;i<n;i++)
    {
        arr[i][0] = x[i];
        arr[i][1] = y[i];
    }
    //forward difference calculator module
   for(i=(n-1),c=2;i>0;i--,c++)
   {
        for(j=0;j<i;j++)
        {
            arr[j][c]=y[j]=y[j+1]-y[j];
        }
    }
    //printing module
    printf("\n------------------------------------------------");
    printf("\n***Forward difference table***");
    printf("\n------------------------------------------------");
    printf("\nx\t\ty\t\ty1\t\ty2\t\ty3\t\ty4\t\ty5\t \n");
    printf("------------------------------------------------\n");
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n-i+1;j++)
        {
         printf("%f\t",arr[i][j]);   
        }
        printf("\n");
    }
    float  u , xn ,y0 , u1;
    int factorial=1;
    //newtons forward interpolation 
    printf("Enter the value of x to find the value of f(x) :  ");
    scanf("%f",&xn);
    u=(( xn - arr[0][0] ) / ( arr[1][0] - arr[0][0] ));
    y0 =arr[0][1];
    u=u1;
    for(i=2;i<n;i++)
    {
        y0 = y0 + (u1 * arr[0][i])/factorial;
        factorial = factorial * i;
        u1= u1*(u*(i-1));
    }
    printf("\n------------------------------------------------");
    printf("The value of f(%f) is  %f ",xn,y0);
    printf("\n------------------------------------------------");

    return 0;

}