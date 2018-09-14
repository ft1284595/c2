#include <stdio.h>

int main1(void)
{
	int a = 3;
	int b = 8;
	int *p = &a;
	int **q;
	q = &p;

	**q = 10;
	*q = &b;
	**q = 5;
	p = &b;
	*p = 9;
	printf("a=%d\tb=%d\n", a, b);

	return 0;

}

//void fun(char *arr[], int n)
void fun(char **arr, int n)	//二重指针传参时等价于指针数组
{
	int i;
	for(i=0; i<n; i++){
		//printf("%s\n", arr[i]);
		printf("%s\n", *(arr+i));	//当成二重指针区索引元素
	}
}
int main(void)
{
	char *s[3] = {"hello", "world", "zx"};
	fun(s, 3);

	return 0;
}
