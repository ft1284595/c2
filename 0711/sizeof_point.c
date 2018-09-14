#include <stdio.h>

int main(void)
{
	char *p[10];
	printf("%ld\t%ld\n", sizeof(p), sizeof(*p));

	return 0;
}
