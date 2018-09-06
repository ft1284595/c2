#include <stdio.h>
#include <string.h>


int main(void)
{
	//char dest[10];
	//char *dest;		//dest是野指针,指向的区域没有可读写空间
	//#define NULL (void *)0	//NULL的定义
	//char *dest = NULL;
	
	//char dest[3];
	//char dest[20] = {'a','b','c','d','e','f','g','h'};	
	//char dest[20];
	

	//char src[] = "hello";
	
	char str1[10] = "hello";
	//char str2[10] = str1;		//错误写法,数组没有这种操作
	char str2[10];
	strcpy(str2, str1);
	printf("%s\n", str2);

	//printf("%s\n", strcpy(dest, src));
	//printf("%s\n", strncpy(dest, src, sizeof(dest) - 1));

	return 0;
}
