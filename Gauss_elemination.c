#include<stdio.h>
int main()
{
    int n,i,j,k,x,y;
    float ratio,sum;
    printf("\n\tEnter the no. of equations :  ");
    scanf("%d",&n);
    float ar[n][n+1],value[n];
    printf("\n\t Enter the coeffecients in row wise form including right hand side : ");
    printf("\n According to the give form input your values from left hand side");
    printf("\nc1x+c2y+c3z........ = b1\nc1x+c2y+c3z......= b2\nc1x+c2y+c3z......= b3\n..........");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf(" Enter data : ");
            scanf("%f",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%f ",ar[i][j]);
        }
        printf("\n");
    }
    // for row manipulation
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>i)
            {
                ratio = ar[j][i]/ar[i][i];
                for(k=0;k<n+1;k++)
                {
                    ar[j][k] = ar[j][k] - ( ratio * ar[i][k]);
                }
                printf ("\n\tPrinting intermediate matrices\n"); 
                for(x=0;x<n;x++)
                {
                    for(y=0;y<n+1;y++)
                    {
                        printf("%f ",ar[x][y]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
        //for finding value
    value[n-1] = ar[n-1][n]/ar[n-1][n-1];

    for(i=n-2;i>=0;i--)
    {
        sum=0;
        for(j=i+1;j<n;j++)
        {
            sum = sum + (ar[i][j]*value[j]);
        }
        value[i]=(ar[i][n]-sum)/ar[i][i];
    }
    // lastly printing values 
    printf("value of x = %f ",value[0]);
    printf("\nvalue of y = %f ",value[1]);
    printf("\nvalue of z = %f ",value[2]);
   
return 0;
}