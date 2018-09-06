#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[2] = "hello";

	printf("strlen(str)=%ld\n",strlen(str));
	printf("sizeof(str)=%ld\n", sizeof(str));

	printf("%s\n", str);
	return 0;
}
