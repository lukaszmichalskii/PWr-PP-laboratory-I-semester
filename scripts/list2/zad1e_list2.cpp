#include <stdio.h>
main()
{

	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int k = 1;
	float sumSeries;
	for (k; k<=n; k++)
		sumSeries +=  1/(3.0*k+1);

	printf("Sum of series is equal to %.2f",sumSeries);
}
