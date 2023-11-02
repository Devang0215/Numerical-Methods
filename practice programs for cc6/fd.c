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
    for(j=2;j<n+1;j++)
    {
        for(i=0;i<n-j+1;i++)
        {
            ar[i][j]=ar[i+1][j-1]-ar[i][j-1];
        }
    }
    for(i=0;i<n;i++)s
    {
        for(j=0;j<n-i+1;j++)
        {
            printf("%.2f ",ar[i][j]);
        }
        printf("\n");
    }
    //calculating the newton 
    float xn,u,u1,yo,yn;
    int factorial=1;
    printf("Enter the value of x to find f(x) :  ");
    scanf("%f",&xn);
    u=(xn-ar[0][0])/(ar[1][0]-ar[0][0]);
    yo=ar[0][1];
    u1=u;
    for(i=2;i<=n;i++)
    {
        yo=yo+(u1*ar[0][i])/factorial;
        factorial=factorial*i;
        u1= u1*(u-(i-1));
    }
    printf("The value is %.2f",yo);
}