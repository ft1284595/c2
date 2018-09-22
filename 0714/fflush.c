#include <stdio.h>
#include <unistd.h>

int main(void)
{
	FILE *fp;
	fp = fopen("abc", "w");
	fputs("helloworld", fp);
	sleep(5);
	//fflush(fp);
	fclose(fp);
	return 0;
}
