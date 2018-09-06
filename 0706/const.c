#include <stdio.h>
typedef size_t unsigned int;

int main(void)
{
	unsigned int a = 3;
	size_t b = 3;
	/*
	const int a = 3;
	const int b;
	b = 3;
	a = 5;
	*/

	const char *s = "hello";
	//char *s = "hello";
	//*s = 'H';
	//*(s+3) = 'H';
	s = s + 1;

	printf("%s\n", s);

	return 0;
}
