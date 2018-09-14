#include <stdio.h>

//argc 表示命令行参数的个数
//char *argv[] 保存命令行参数的地址
//	./app	hello world 123
//	argc = 4
//	argv[0] = "./app";
//	argv[1] = "hello";
//	argv[2] = "world";
//	argv[3] = "123";
//	argv[4] = "NULL";
//int main(int argc, char *argv[])
int main(int argc, char **argv)
{
	int i;
	for(i=0; i<argc; i++){
		printf("%s\n", argv[i]);
	}
	return 0;
}
