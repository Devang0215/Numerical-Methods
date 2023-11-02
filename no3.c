#include<stdio.h>
#include<stdlib.h>

int main()
{
int i, n, j, ch;
	double a[100][100], u, x, y, factorial, u1;
	printf("\nEnter the number of values: ");
	scanf("%d",&n);
	printf("\nEnter the values of x: \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%lf",&a[i][0]);
	}
	printf("\nEnter the values of f(x): \n");
	for(i=0;i<n;i++)
	{
		printf("Enter the value: ");
		scanf("%lf",&a[i][1]);
	}
	factorial=1;
			printf("\nEnter the value x: ");
			scanf("%lf",&x);
			for(j=2;j<n+1;j++)                                
			{
				for(i=0;i<n-j+1;i++)
				{
					a[i][j] = a[i+1][j-1] - a[i][j-1];
				}
			}
			printf("\nThe Forward difference table is: \n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<=n-i;j++)
				{
					printf("%0.3lf\t",a[i][j]);
				}
				printf("\n");
			}
            u1=x;
            for(i=2;i<=n;i++)
            {
                y = y + (u1 * a[0][i])/factorial;            
                factorial = factorial * i;
                u1=u1*(x-(i-1));
            }
			printf("\n\nValue at x=%lf is = %lf",x,y+1);

	return 0;
}