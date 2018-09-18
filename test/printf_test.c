#include <stdio.h>

char ga[] = "abcdefghijk";

void method(char ca[])
{
	printf(" addr of array param = %#x \n", &ca);

	printf(" (*ca) = %c \n", ca);
	printf(" addr (ca[0]) = %#x \n", &(ca[0]));
	printf(" addr (ca[1]) = %#x \n", &(ca[1]));
	printf("++ca = %#x \n\n", ++ca);
}

int main(void)
{
	printf(" addr of array param = %#x \n", &ga);

	printf(" (*ga) = %c \n", *ga);
	printf(" addr (ga[0] = %#x \n)", &(ga[0]));
	printf(" addr (ga[1] = %#x \n)", &(ga[1]));

	printf(" sizeof ga = %ld \n\n", sizeof(ga));

	method(ga);

	return 0;
}
