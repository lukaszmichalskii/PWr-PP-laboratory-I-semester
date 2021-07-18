#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,delta,p,q,x1,x2,x0;
	printf("Enter parameters of quadratic equation: Ax^2 + Bx + C = 0\nA = ");
	scanf("%f",&a);
	printf("B = ");
	scanf("%f",&b);
	printf("C = ");
	scanf("%f",&c);
	p=(-b/(2*a));
	delta = b*b - 4*a*c;
	q=(-delta)/(4*a);
	printf("The coordinates of the vertex of the parabola p=(%.2f,%.2f)",p,q);
	printf("\nPoint of intersection with the axis OY = (%.2f,%.2f)",0,c);
	if (delta>=0)
	{
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("\ndelta > 0 so there is two roots of the equation x1 = %.2f,x2 = %.2f",x1,x2);
		}
		else if (delta==0)
		{
			x0=(-b/(2*a));
			printf("\ndelta = 0 so there is one root of the equation x0 = %.2f",x0);
		}
	}
	else 
		printf("\ndelta < 0 so the equation has no solutions in set of real numbers");

	printf("\n\nPress enter to exit");
	fflush(stdin); getchar();
}
