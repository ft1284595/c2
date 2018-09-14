#include <stdio.h>

int main01(void)
{
	//int a[10];
	char *array[3] = {"hello", "world", "itcast"};	//这里的hello world itcast是存储在RO.Data区的
	//char array[3][20] = {"hello", "world", "itcast"};	//这里的hello world itcast 都是存储在栈区的
	//char *str = "hello";
	int i;
	printf("%ld\n", sizeof(array));

	for(i=0; i<3; i++){
		printf("%p\t%s\n", array[i], array[i]);
	}

	return 0;
}

//指针数组易犯错误
int main(void)
{
	//int a[10];
	char *array[3];		//array的char *是个野指针, 没有存储空间,在进行写操作的时候很容易段错误
	
	//char array[3][20] = {"hello", "world", "itcast"};	
	//char *str = "hello";
	int i;

	for(i=0; i<3; i++){
		scanf("%s", array[i]);	//使用二位数组申请字符串存储空间
	}
	for(i=0; i<3; i++){
		printf("%p\t%s\n", array[i], array[i]);
	}

	return 0;
}

