#include<stdio.h>

int main()
{
    int n, i, j, c;
    float  x[10], y[10], arr[10][10];
    printf("\tEnter the no. of values  :  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the value in x[%d] and y[%d]",i,i);
        scanf("%f %f",&x[i],&y[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i][0]=x[i];
        arr[i][1]=y[i];
    }
    //backward differenece calculating module
    for(i=0,c=2;i<n;i++,c++)
    {
        for(j=(n-1);j>i-1;j--)
        {
            arr[j][c]=y[j]=(y[j]-y[j-1]);
        }
    }
    //printing module
    printf("\n------------------------------------------------");
    printf("\n***Backward  difference table***");
    printf("\n------------------------------------------------");
    printf("\nx\t y\t y1\t y2\t y3\t y4\t y5\t \n");
    printf("------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i+1;j++)
        {
            printf("%.2f\t",arr[i][j]);
        }
        printf("\n");
    }
    //module for backward interpolation  
    float u,u1, xn,y0;
    int factorial =1;
    printf("Enter the valur of x to calculate  f(x) : ");scanf("%f",&xn);
    u=((xn-arr[n-1][1])/arr[1][0]-arr[0][0]);
    y0 = arr[n-1][1];
    u=u1;
    j=2;
    for(i=n-2;i>0;i--)
    {
        y0=y0+(u1 * arr[i][j])/factorial;
        factorial =factorial * i;
        u1=u1*(u+(j-1));
        j++;
    }
    printf("\n------------------------------------------------");
    printf("\nThe value of f(%f) is  %f ",xn,y0);
    printf("\n------------------------------------------------");

}