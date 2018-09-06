#include <stdio.h>

int main(void)
{
	char *p = "beautiful";

	//printf("*p++=%c\n", *p++);
	printf("*++p=%c\n", *++p);
	printf("++(*p)=%c\n", ++(*p));
	printf("(*p)++=%c\n", (*p)++);

	return 0;
}
