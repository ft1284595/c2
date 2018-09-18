#include <stdio.h>

//1.利用typedef 封装数据类型
//1.利用typedef 简化函数指针定义

//typedef int ssize_t ;
//typedef long long ssize_t ;

//int a = 3;
//ssize_t b = 5;

/*
typedef unsigned char u8_t;
typedef unsigned int u32_t;
typedef int ssize_t;
typedef unsigned int size_t;
*/

/*
ssize_t mystrlen(char *str)
{
	//
}
*/

/*
long long mystrlen(char *str)
{
}
*/

int main1(void)
{
	char *s = "hello";

	//printf("%d\n", mystrlen);

	return 0;
}

//注意区分typedef和define的区别
typedef char* NEWTYPE;

int main(void)
{
	NEWTYPE p1, p2, p3;	//char *p1, *p2, *p3;
}

/*
#define NEWTYPE char*
int main(void)
{
	NEWTYPE p1, p2, p3;	//char *p1, p2, p3;
}
*/



char *fun(char *a, int b, char *s[])
{
}

char *(*p)(char *, int, char **);
typedef char *(*FUN) (char *, int, char **) ;
FUN too(int a);
