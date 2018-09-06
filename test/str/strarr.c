#include <stdio.h>

int main(void)
{
	char arr[] = "hello";
	//char *arr = "hello";
	while(*arr != '\0')
		putchar(*arr++);
	

	return 0;
}
