#include<stdio.h>
 
void display(int arr[][20],int n) //function for display of backward differenece table
{
	int i,j;
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<=i+1;j++)
		{
			printf("%d	|",arr[i][j]); //printing the elements of 2d array
		}
		printf("\n");
	}
}
void backward_difference(int ar1[],int arr[],int n)
{
	 int i,ar[20],arr1[20][20]={0};
	 int j;
		int c;
		for(i=0;i<n;i++)
		{
			arr1[i][0]=ar1[i]; //storing elements of x in the 2d array
		}
		for(i=0;i<n;i++)
		{
			arr1[i][1]=arr[i]; //same for y=f(x)
		}
		
			for(i=0,c=2;i<n;i++,c++)
			{
				for(j=n-1;j>i-1;j--)
				{
					arr1[j][c]=arr[j]=(arr[j]-arr[j-1]); //calculating backward difference
				}
			}
		 display(arr1,n+2); // calling function for display 

}
int main()
{
	int j,n,n1;
	int arr1[10],arr2[10];
	printf("Enter the  size : ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	 	{
	 		printf("Enter the data : "); //taking input for x
	 		scanf("%d",&arr1[j]);
	 	}
	printf("Enter the  size : ");
	scanf("%d",&n1);
	for(j=0;j<n1;j++)
	 	{
	 		printf("Enter the data : "); //taking input for y=f(x)
	 		scanf("%d",&arr2[j]);
	 	}
	printf("\n\tBACKWARD DIFFERENCE TABLE \n");
	printf("\nx\t|y\t|y0\t|y1\t|y2\t|y3\t|y4\t|y5\n");
	printf("-----------------------------------------------------------------------\n");
	 backward_difference(arr1,arr2,n1); //backward difference table
	  	
return 0;	
}
