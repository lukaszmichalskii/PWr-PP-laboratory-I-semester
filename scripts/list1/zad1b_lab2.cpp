#include <stdio.h>
int main()
{
	int n=0;
	float a,b,c,sum,arithmeticAverage;
	printf("Enter A: ");
	scanf("%f",&a);
	n++;
	printf("Enter B: ");
	scanf("%f",&b);
	n++;
	printf("Enter C: ");
	scanf("%f",&c);
	n++;
	sum=a+b+c;
	arithmeticAverage=sum/n;
	if (a==arithmeticAverage)
		printf("You entered three numbers which are the same so arithmetic average is equal to one of them or\narithmetic average is equal to A");
	else
	{	
		printf("Sum = %f",sum);
		printf("\nArithmetic Average = %f",arithmeticAverage);
	}	
	printf("\n\nTo exit, press enter");
	fflush(stdin);
	getchar();
}
