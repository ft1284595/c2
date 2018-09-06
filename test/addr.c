#include <stdio.h>
/*
void swap(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;

}
*/

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a = 3, b = 5;
	printf("a=%d\tb=%d\n", a, b);
	//swap(a, b);
	swap(&a, &b);
	printf("a=%d\tb=%d\n", a, b);
	
	return 0;
}
