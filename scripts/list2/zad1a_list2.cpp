#include <stdio.h>

int main()
{
    char c;
	
	for (int i=32; i<128; i++)
		{
			c = char(i);
			printf("%d\t%c\t%x\t%o\n", i, c, i, i);
		}
	
	return 0;
}
