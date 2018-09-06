#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world itcast";
	char *keyword = "or";
	//char *keyword = "r";
	char *p = NULL;

	p = strstr(str, keyword);

	printf("%s\n", p);

	return 0;
}
