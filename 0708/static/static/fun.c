#include <stdio.h>

extern int c;

int fun(void)
{
	printf("%d\n", c);
	return 0;
}
