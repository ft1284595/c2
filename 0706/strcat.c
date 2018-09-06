#include <stdio.h>
#include <string.h>

int main(void)
{
	//char s1[10] = "hello";
	//char *s1 = "hello";
	char s1[7] = "hello";
	char s2[] = "BOY";

	strcat(s1, s2);
	printf("%s\n", s1);
	
	return 0;
}
