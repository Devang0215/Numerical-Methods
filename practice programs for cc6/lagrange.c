#include<stdio.h>
int main()
{
    float x[10],y[10],lag[10][10],X,Dr[10],Ydr[10],prod=1,sum=0.0;
    int n,i,j;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter the data for x\n");
    for(i=0;i<n;i++)
    {
        printf("Enter data : ");
        scanf("%f",&x[i]);
    }
    printf("\nEnter the data for f(x) : \n");
    for(j=0;j<n;j++)
    {
        printf("Enter data : ");
        scanf("%f",&y[j]);
    }
    printf("Enter the value of x to find :  ");
    scanf("%f",&X);


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            lag[i][j]=X-x[j];
            else
            lag[i][j]=x[i]-x[j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            prod=prod*lag[i][j];
        }
        Dr[i]=prod;
        Ydr[i]=y[i]/Dr[i];
        prod=1;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %.2f\t",lag[i][j]);
        }
        printf("\t%.2f\t%.2f",Dr[i],Ydr[i]);
        printf("\n");
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+Ydr[i];
    }
    prod=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            prod=prod*lag[i][j];
        }
    }
    printf("the value of f(%.2f)is  =   %f",X,(prod*sum));
}