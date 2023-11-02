#include<stdio.h>

void display(float arr[][20],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			printf("%.2f	",arr[i][j]);
		}
		printf("\n");
	}
    
}

float fact(int a)
{
	float fac = 1;
	if(a == 0)
	return 1;
	else
	fac = a * fact(a-1);

	return (fac);
}

void forward_difference(float ar1[],float arr[],int n)
{
	 float ar[20],arr1[20][20]={0},temp,x,u = 0.0,sum;
     int f,m,k=0,i; 
     int j;
		int c;
		for(i=0;i<n;i++)
		{
			arr1[i][0]=ar1[i];
		}
		for(i=0;i<n;i++)
		{
			arr1[i][1]=arr[i];
		}
		 for(i=(n-1),c=2;i>0;i--,c++)
		{
			for(j=0;j<i;j++)
			{
				arr1[j][c]=arr[j]=(arr[j+1]-arr[j]);
			}
			
		}
		 display(arr1,n+2);
       
        float a[10];
            for(i=1;i<n;i++)
            {
                a[i]=arr1[0][i];
            }
        // printf("\n");
        //     for(i=1;i<=n;i++)
        //     {
        //         printf(" %f",a[i]);
        //     }
        printf("\n\t enter the value of x0 for f(x0) : ");
        scanf("%f",&x);
		i=0;
		do
		{
			if(ar1[i]<x && x<ar1[i+1])
			k=1;
			else
			i++;
		}while(k!=1);
		f=i;
        u = (x - ar1[f]) / (ar1[f+1]-ar1[f]);
        printf("\n\t The value of  u calculated is : %.2f ",u);
		n=n-i+1;
		sum=0;
		for(i=0;i<n-1;i++)
		{
			temp=1;
			for(j=0;j<i;j++)
			{
				temp = temp *(u - j);
			}
			 m=fact(i);
			 sum=sum+temp*(arr1[i][f]/m);
		}
		printf("\n\n\t f(%.2f) = %f ",x,sum);
}

int main()
{
	int j,n,n1;
    
	float arr1[10],arr2[10];
	printf("Enter the  size : ");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	 	{
	 		printf("Enter the data : ");
	 		scanf("%f",&arr1[j]);
	 	}
	printf("Enter the  size : ");
	scanf("%d",&n1);
	for(j=0;j<n1;j++)
	 	{
	 		printf("Enter the data : ");
	 		scanf("%f",&arr2[j]);
	 	}
	forward_difference(arr1,arr2,n1);
return 0;	
}