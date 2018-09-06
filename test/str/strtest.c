#include <stdio.h>

int a = 3;
int b;

int main(void)
{
	int c = 3;
	char *str1 = "hello";
	char str2[] = "hello";

	printf("&a=%p\n", &a);
	printf("&b=%p\n", &b);
	printf("&c=%p\n", &c);
	printf("str1=%p\n", str1);
	printf("&str1=%p\n", &str1);
	printf("str2=%p\n", str2);
	printf("&str2=%p\n", &str2);

	return 0;
}
