#include <stdio.h>
#include <string.h>

void change_str(char *s){
	printf("sizeof(s)=%ld\tstrlen(s)=%ld\n", sizeof(s), strlen(s));
	*(s+3) = '\0';

}

int main(void)
{
	char str[10] = "hello";
	change_str(str);

	printf("%s\n", str);
	
	return 0;
}
