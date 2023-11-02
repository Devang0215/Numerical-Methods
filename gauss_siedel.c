/*given equations*/
/*x-8y+3z=-4
2x-y+9z=12
8x+2y-2z=8
*/
/*diagonally arranging*/
/*8x+2y-2z=8
x-8y+3z=-4
2x-y+9z=12
*/

#include<stdio.h>
#include<math.h>
#define tolerance 0.001
#define x(y,z) ((8 - 2* y + 2 *z )/8)
#define y(z,x) ((-4 - 3 * z  -  x)/(-8))
#define z(x,y) ((12 - 2 * x + y)/9)

int main()
{
	double x=0,y=0,z=0,x1,y1,z1;
	int i=0,flag=0;
	printf("\n--------------------------------------------------------------\n");
	printf("\nsteps\tx\ty\tz\n");
	printf("\n%d\t%.2f\t%.2f\t%.2f",i,x,y,z);
	do
	{
		x1=x(y,z);
		y1=y(z,x1);
		z1=z(x1,y1);
		if(fabs(x1-x)<tolerance && fabs(y1-y)<tolerance && fabs(z1-z)<tolerance )
		{
			printf("\n-------------------------------------------------------\n");
			printf("\n\t x = %.3f ",x1);
			printf("\n\t y = %.3f ",y1);
			printf("\n\t z = %.3f ",z1);
			flag=1;
		}
		else
		{
			x=x1;
			y=y1;
			z=z1;
			i++;
			printf("\n%d\t%.2f\t%.2f\t%.2f",i,x1,y1,z1);
			
		}

	} while (flag!=1);
	return 0;
}