#include <stdio.h>

int main(void)
{
	FILE *fp;
	fp = fopen("itcast", "w+");
	//fseek(fp, -1, SEEK_SET);	//无意义
	fseek(fp, 1000, SEEK_END);
	fputc('\0', fp);	//seek到文件末尾后并没有真正的拓展文件,直到下一次写操作发生的时候才真正拓展了文件
	fclose(fp);

	return 0;
}
