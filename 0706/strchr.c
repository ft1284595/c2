#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "hello world itcast";
	//char key = 'o';
	char key;
	printf("str=%s\n", str);
	key = getchar();
	char *p = NULL;

	p = strchr(str, key);

	//printf("&str=%p\n", str);
	//printf("p=%p\n", p);
	
	/*
	if(!p)
		printf("unfined\n");
	else
		printf("%s\n", p);
	*/
	!p ? printf("un find\n") : printf("%s\n", p);

	return 0;
}
