#include<stdio.h>

int main()
{
	int n,i;
	float x[20],y[20],sum=0,sum1=0,sum2=0,X,Y,g,h,k,l,c;
	printf("\n\t Enter the size of x : ");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("Enter the data : ");
		scanf("%f",&x[i]);
		i++;
	}
	printf("\n\tEnter the size of y : ");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		printf("Enter the data : ");
		scanf("%f",&y[i]);
		i++;
	}
	printf("\n\tXi\tYi\t(Xi - X')\t(Yi - Y')\t(Xi - X')(Yi - Y')\t(Xi - X')2");
	for(i=0;i<n;i++)
	{
		sum +=x[i];	
	}
	X = sum/n;
	sum=0;
	for(i=0;i<n;i++)
	{
		sum +=y[i];
	}
	Y = sum/n;
	for(i=0;i<n;i++)
	{
		g = x[i] - X;
		h = y[i] - Y; 
		k=(g*h);
		sum1 += k;
		l=(g*g);
		sum2 += l;
		printf("\n\t%.2f\t%.2f\t%.2f\t\t%.2f\t\t%.2f\t\t\t%.2f ",x[i],y[i],g,h,k,l);	
	}
	printf("\n\n\tThe value of m = %.4f ",sum1/sum2);
	c= Y - ((sum1/sum2) * X);
	printf("\n\n\tThe value of c = %.4f ",c);
	printf("\n\t The average rate of growth per week %.4f",sum1/sum2);
	printf("\n\n\t The equation of the line is  y = %.4fx + %.4f",sum1/sum2,c);
	 
	return 0;
}
