#include <stdio.h>
/*
int main(void)
{
	int a = 8;
	int b = 5;
	
	int *const p = &b;	//指针常量
	*p = 10

	//p = &a;			//指针常量存放的地址不能修改
	//p++;				//指针常量存放的地址不能修改


	printf("%p\t%d\n", &b, b);

	return 0;
}
*/

int main(void)
{
	int a = 8;
	int b = 5;

	const int *p = &a;		//常量指针
	//int const *p;
	
	//*p = 7;					//常量指针指向的内容不能修改
	p = &b;

	printf("%p\t%d\n", p, *p);	

	return 0;
}

/*
 * const 修饰局部变量表示编译阶段不能被修改,
 * 但其实可以在运行阶段用越界操作或外挂来修改
int main(void)
{
	int b = 5;
	const int a = 3;

	//char *str = "hello";
	//*str = 'H';
	
	*(&b+1) = 10;		//越界

	printf("%p\t%d\n", &a, a);
	printf("%p\t%d\n", &b, b);


	return 0;
}
*/
