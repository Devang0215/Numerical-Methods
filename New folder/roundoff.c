#include<stdio.h>
#include<math.h>

int main()
{
	float n;
	printf("Enter any  float number  : ");
	scanf("%f",&n);
	printf("%d",(int)round(n));
	printf("\n");
	printf("%f",round(n));
	
	return 0;
}
