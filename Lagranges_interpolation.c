//lagranges interpolation theorem
#include<stdio.h>

int main()
{
	int n,n1,i,j;
	float x[10],y[10],lag[10][10],X,Dr[10],Ydr[10],prod=1,sum;			
	printf("\n\t Enter the size :  ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the value : "); //entering the value of the table
		scanf("%f",&x[i]);
	}
	printf("\n\t Enter the size :  ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	{
		printf("Enter the value : ");
		scanf("%f",&y[i]);
	}
	printf("\n\tEnter the value of x to find  f(x) : ");
	scanf("%f",&X);
	printf("|A\t|B\t|C\t|D\t\t|Dr\t|(Yr/Dr)");
	printf("\n=========================================================================");	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				lag[i][j]= X-x[j]; //calculating the  difference
			else
				lag[i][j]= x[i]-x[0+j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			prod = prod * lag[i][j]; //calculating the row product
		}
		Dr[i] = prod;
		Ydr[i]=(y[i]/Dr[i]); //calculating yr /dr
		prod = 1;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%.2f\t",lag[i][j]); //printing the table values
		}
		printf("\t%.2f\t %.2f",Dr[i],Ydr[i]); // printing d r  and yr/dr 
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
			{
				prod =	prod * lag[i][j]; // calculating the answer 
			}
		}
	}
	printf("\n=========================================================================");
	printf("\n\n\t The value of f(%.2f) is  ====  %f ",X,(prod*sum)); //printing the answer
	printf("\n=========================================================================");
	return 0;	
}






