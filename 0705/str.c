#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[5] = "hello";
	printf("sizeof(str) = %ld\tstrlen(str)=%ld\n", sizeof(str), strlen(str));

	return 0;
}
