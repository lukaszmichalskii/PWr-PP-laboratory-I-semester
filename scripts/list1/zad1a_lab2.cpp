#include <stdio.h>
int main()
{
	int a, b, max;
	printf("Enter two integer numbers\nA = ");
	scanf("%d",&a);
	printf("B = ");
	scanf("%d",&b);
	if (a>b)
	{
		max=a;
		printf("max = %d",max);
	}
	else if (a<b)
	{
		max=b;
		printf("max = %d",max);
	}
	else 
	{
		max=a;
		printf("max = %d = %d",a,b);
	}
	printf("\nPress enter to exit");
	fflush(stdin); getchar();
}
