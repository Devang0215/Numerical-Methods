#include<stdio.h>
 
void display(float arr[][20],int n) //display function for displaying table
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			printf("%.2f	|",arr[i][j]); //printing elements 
		}
		printf("\n");
	}
}
void forward_difference(float ar1[],float arr[],int n) // caling forward difference table
{
	 float ar[20],arr1[20][20]={0}; //taking 2 D array to store elements 
	 int i,j;
		int c;
		for(i=0;i<n;i++)
		{
			arr1[i][0]=ar1[i];  //for  putting table contents
		}
		for(i=0;i<n;i++)
		{
			arr1[i][1]=arr[i];
		}
		 for(i=(n-1),c=2;i>0;i--,c++)
		{
			for(j=0;j<i;j++)
			{
				arr1[j][c]=arr[j]=(arr[j+1]-arr[j]); //for calculating forward difference
			}
			
		}
		 display(arr1,n+2); //calling display function

}
int main()
{
	int j,n,n1;
	float arr1[10],arr2[10];
	printf("Enter the  size  of  x: ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	 	{
	 		printf("Enter the data : "); // entering values of x
	 		scanf("%f",&arr1[j]);
	 	}
	printf("Enter the  size of y=f(x): ");
	scanf("%d",&n1);
	for(j=0;j<n1;j++)
	 	{
	 		printf("Enter the data : "); //enetering the values of y
	 		scanf("%f",&arr2[j]);
	 	}
	printf("\nx\t|y\t|y0\t|y1\t|y2\t|y3\t|y4\t|y5\n");
	printf("-----------------------------------------------------------------------\n");
	 forward_difference(arr1,arr2,n1); // calling forward difference function
	  	
return 0;	
}
