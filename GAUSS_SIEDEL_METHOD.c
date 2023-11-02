#include<stdio.h>
/*x+y+4z=9
8x-3y+2z=20
4x+11y-z=33
*/

int main()
{
	int n,i,j,m;
	float a,b,c,d,ar1[10][10],ar2[10][10],ar3[20];
	float x=0,y=0,z=0;
	// char ar1[10][10];
	//taking input for the number of equations
	printf("enter the number of equation you want to give  :  ");
	scanf("%d",&n);
	// storing the equations in the 2d array
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i;j++)
		{
			printf("\n\tEnter the value of a,b,c and d for the eqaution %d ax%d+bx%d+cx%d = d \n",i,i,i+1,i+2);
 			scanf("%f %f %f %f",&a,&b,&c,&d);
			ar1[i][j]=a;
			ar1[i][j+1]=b;
			ar1[i][j+2]=c;
			ar1[i][j+3]=d;
		}

	}
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=i;j<=i;j++)
	// 	{
	// 		printf("\n\tEnter the value of a,b,c and d for the eqaution %d ax%d+bx%d+cx%d = d \n",j,j,j+1,j+2);
	// 		scanf("%f %f %f %f",&a,&b,&c,&d);
	// 		ar1[i][j]=a;
	// 		ar1[i][j+1]=b;
	// 		ar1[i][j+2]=c;
	// 		ar2[i][1]=d;
	// 	}
	// }
	
	//printing the equations 
	for(i=1;i<=n;i++)
	{
		printf("\n\t Equation no %d is : \n\t",i);
		printf("(%.2fX)+(%.2fY)+(%.2fZ) = %.2f ",ar1[i][i],ar1[i][i+1],ar1[i][i+2],ar1[i][i+3]);
		printf("\n");
	}
	
	
	//taking the input for the iteration 
	printf("Enter the number of iteration  :  ");
	scanf("%d",&m);
	
	
	//logic for the the iterative part 

	for(i=1;i<=m;i++)
	{
		for(j=i;j<=i;j++)
		{
			ar3[i] = (ar1[i][j+3]+(ar1[i][j+1]*y)+(ar1[i][j+2]*z))/ar1[i][j];
			ar3[i+1] = (ar1[i][j+3]+(ar1[i][j]*ar3[i])+(ar1[i][j+2]*z))/ar1[i][j+1];
			ar3[i+2] = (ar1[i][j+3]+(ar1[i][j]*ar3[i])+(ar1[i][j+1]*ar3[i+1]))/ar1[i][j+2];
			// ar3[i]=ar3[i];
			// ar3[i+1]=ar3[i+1];
			// ar3[i+2]=ar3[i+2];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%f",ar3[i]);
		printf("\n");
	}
	
	// int equation(float ar1[10][10],float x,float y,float z)
	// {
	// 	x = ar1[1][4]+(ar1[1][2]*y)+(ar1[1][3]*z))/ar1[1][1];
	// }
	
	
	
	
	
	//for reshuffling the equations
	
	// for(i=1;i<=n;i++)
	// {
	// 	for(j=i;j<=i;j++)
	// 	{
	// 		if(ar1[i][j] >= ar1[i][j+1] && ar1[i][j] >= ar1[i][j+2] || ar1[i][j+1] >= ar1[i][j] && ar1[i][j+1] >= ar1[i][j+2] || ar1[i][j+2] >= ar1[i][j] && ar1[i][j+2] >= ar1[i][j+1]  )
	// 		{
	// 			ar2[i][j]=ar1[i][j];
	// 			ar2[i][j+1]=ar1[i][j+1];
	// 			ar2[i][j+2]=ar1[i][j+2];
	// 			ar2[i][j+3] = ar1[i][j+3];
	// 		}
	// 		else
	// 		{
				
	// 		}
	// 	}
	// }
	// for(i=1;i<=n;i++)
	// {
	// 	printf("\n\t Equation no %d is : \n\t",i);
	// 	printf("(%.2fX)+(%.2fY)+(%.2fZ) = %.2f ",ar2[i][i],ar2[i][i+1],ar2[i][i+2],ar2[i][i+3]);
	// 	printf("\n");
	// }
	
	
	
}












