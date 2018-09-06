#include <stdio.h>
#include <string.h>

/*
int main(void)
{
	char str[] = "hello world itcast good";
	char *p;

	p = strtok(str, " ");
	printf("%s\n", p);
	while((p=strtok(NULL, " ")) != NULL)
		printf("%s\n", p);
	//p = strtok(NULL, " ");
	//p = strtok(str, " ");
	//printf("%s\n", p);

	//printf("str=%s\n", str);
	
	return 0;
}
*/

/*
int main(void)
{
	char str[] = "hello, world, itcast! good.; night?";
	char *delim = " ,?!.;";
	//char delim[] = " .?.;";
	char *p;

	p = strtok(str, delim);
	printf("%s\n", p);
	while((p=strtok(NULL, delim)) != NULL)
		printf("%s\n", p);
	//p = strtok(NULL, " ");
	//p = strtok(str, " ");
	//printf("%s\n", p);

	//printf("str=%s\n", str);
	
	return 0;
}
*/

/*
int strlen(const char *str)
{
	return 6;
}
*/

int main(void)
{
	char str[] = "hello world itcast good night";
	char tmp[] = "I am a student\n";
	char *delim = " ";
	char *p;

	p = strtok(str, delim);	//内部指针保存下一次要strtok的字符串地址
	printf("%s\n", p);

	p = strtok(tmp, delim);
	printf("%s\n", p);

	while((p=strtok(NULL, delim)) != NULL)
		printf("%s\n", p);
	//p = strtok(NULL, " ");
	//p = strtok(str, " ");
	//printf("%s\n", p);

	//printf("str=%s\n", str);
	
	return 0;
}
