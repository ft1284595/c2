#include <stdio.h>

int foo(void)
{
	static int b;
	//int b;
	printf("%d\n", b);
	b = 3;
	printf("%d\n", b);
}

int main(void)
{
	foo();
	//printf("asdfsad\n");
	foo();
}

