#include <stdio.h>
#include <cmath>
main()
{
	int i=0;
	while (i<=10)
	{
		printf("%.*f\n",i,M_PI);
		i++;
	}
	return 0;
}
