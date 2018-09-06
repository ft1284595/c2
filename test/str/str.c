#include <stdio.h>

int main(void)
{
	char *str = "hello";
	//char str[] = "hello";
	str[0] = 'H';

	printf("%s\n", str);

	return 0;
}
