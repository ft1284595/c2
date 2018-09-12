#include <stdio.h>


//阶乘
int factorial(int n)
{
	if(n == 0)
		return 1;
	return n * factorial(n-1);
}

int main(void)
{
	int n, res;
	scanf("%d", &n);

	res = factorial(n);
	printf("res=%d\n", res);

	return 0;
}
