#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,c;
    float x[10],y[10],ar[10][10];
    printf("Enter the no of values :  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter data x[%d]: ",i);
        scanf("%f",&x[i]);
        printf("Enter data y[%d]: ",i);
        scanf("%f",&y[i]);
    }
    for(i=0;i<n;i++)
    {
        ar[i][0]=x[i];
        ar[i][1]=y[i];
    }
    // for(i=0,c=2;i<n;i++,c++)
    // {
    //     for(j=(n-1);j>i-1;j--)
    //     {
    //         arr[j][c]=y[j]=(y[j]-y[j-1]);
    //     }
    // }
     for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        {
            ar[i][j]=ar[i+1][j-1]-ar[i][j-1];
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
            printf("%.2f\t",ar[i][j]);
        }
        printf("\n");
    }
    //module for backward interpolation  
    float u,u1, xn,y0;
    int factorial =1;
    printf("Enter the valur of x to calculate  f(x) : ");scanf("%f",&xn);
    u=((xn-ar[n-1][1])/ar[1][0]-ar[0][0]);
    y0 = ar[n-1][1];
    u=u1;
    j=2;
    for(i=n-2;i>0;i--)
    {
        y0=y0+(u1 * ar[i][j])/factorial;
        factorial =factorial * i;
        u1=u1*(u+(j-1));
        j++;
    }
    printf("\n------------------------------------------------");
    printf("\nThe value of f(%f) is  %f ",xn,y0);
    printf("\n------------------------------------------------");

return 0;
}