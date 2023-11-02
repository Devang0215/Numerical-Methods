#include<stdio.h>

int main()
{
	float a;
	printf("\n Enter the float number : ");
	scanf("%f",&a);
	printf("\nThe output : %f",(float)(int)a+1);
	return 0;
}

