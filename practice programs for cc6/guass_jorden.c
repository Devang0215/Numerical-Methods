#include<stdio.h>
int main()
{
    int n,i,j,k,x,y;
    float ratio,sum;
    printf("Enter the no. of equations : ");
    scanf("%d",&n);
    float ar[n][n+1],value[n];
    printf("\nEnter the coefficients in row wise form including right hand side ");
    printf("\n according to the given form input your values from left hand side");
    printf("\nc1x+c2y+c3z.....=b1\nc1x+c2y+c3z.....=b2\n ......");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("Enter Data : ");
            scanf("%f",&ar[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%.2f ",ar[i][j]);
        }
        printf("\n");
    }
    //row manipulation
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {
                ratio=ar[j][i]/ar[i][i];
                for(k=0;k<n+1;k++)
                {
                    ar[j][k]=ar[j][k]-(ratio*ar[i][k]);
                }
                printf("Printing inter mediate matrices\n");
                for(x=0;x<n;x++)
                {
                    for(y=0;y<n+1;y++)
                    {
                        printf("%.2f ",ar[x][y]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
  }
  printf("The values of x= %f",ar[0][n]/ar[0][0]);
  printf("The values of y= %f",ar[1][n]/ar[1][1]);
  printf("The values of z= %f",ar[2][n]/ar[2][2]);
  
}