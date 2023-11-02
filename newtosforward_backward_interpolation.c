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
	while(1)
	{
        printf("\n*********MENU*****************\n");
		printf("\n\t1.To use Newton's Forward interpolation");
		printf("\n\t2.To use Newton's Backward interpolation");
		printf("\n\t3.To exit");
		printf("\nEnter your choice................... : ");
		scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
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
			u=((x-a[0][0]))/((a[1][0] - a[0][0]));
			y=a[0][1];
			u1=u;
			for(i=2;i<=n;i++)
			{
				y = y + (u1 * a[0][i])/factorial;             
				factorial = factorial * i;
				u1=u1*(u-(i-1));
			}
			break;
		}
		case 2:
		{
			printf("\nEnter the value x: ");
			scanf("%lf",&x);
			for(j=2;j<n+1;j++)                                //Generating backward difference table
			{
				for(i=0;i<n-j+1;i++)
				{
					a[i][j] = a[i+1][j-1] - a[i][j-1];
				}
			}
			printf("\nThe Backward difference table is: \n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<=n-i;j++)
				{
					printf("%0.3lf\t",a[i][j]);
				}
				printf("\n");
			}
			u=((x-a[n-1][0]))/((a[1][0] - a[0][0]));
			y=a[n-1][1];
			u1=u;
			j=2;             //column number
			for(i=n-2;i>=0;i--)
			{
				y = y + (u1 * a[i][j] )/factorial;             
				factorial = factorial * j;
				u1=u1*(u+(j-1));
				j++;
			}
			break;
		}
		case 3:
		{
			exit(0);
			break;
		}
		default:
		{
			printf("\nInvalid Input...............!");
			break;
		}
	}
	printf("\n\nValue at x=%lf is = %lf",x,y);
	}
 return 0;
}