#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i;
	//int *p = malloc(100);	//在堆上申请100字节
	int *p = calloc(25, sizeof(int));	//在堆上申请25X4=100字节
	//memset(p, 0xAB, 100);
	memset(p, 0, 100);
	int *q = malloc(10000);	//在堆上申请10000字节
	/*
	for(i=0; i<25; i++){
		p[i] = i;
	}
	*/

	for(i=0; i<25; i++){
		printf("%x\n", p[i]);
	}
	
	//p++;		//p地址改变, free(p) 错误
	//	| 地址		|
	//	| 大小		|

	free(p);	//如果没有释放p,会造成内存泄漏

	while(1)
		;

	return 0;
}
