#include <stdio.h>

int main(void)
{
	FILE *fp;
	char buf[] = "fseekhelloworld";
	char str[1024];

	fp = fopen("abc", "w+");
	fputs(buf, fp);
	fseek(fp, 0, SEEK_SET);
	fgets(str, sizeof(str), fp);
	printf("%s\n", str);
	fclose(fp);

	return 0;
}
