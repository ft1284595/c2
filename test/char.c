#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[] = "helloworld";
	printf("sizeof(str)=%ld\nstrlen(str)=%ld\n%s\n", sizeof(str), strlen(str), str);

	printf("***********************\n");
	char *p = str;
	while(*p != '\0'){
		putchar(*p);
		p++;
	}

	putchar('\n');

	return 0;
}
