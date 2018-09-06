#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int main(void)
{
	//int a[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};
	//int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
	//int a[2][5] = {{1,2,3},{6,7,8,9,10}};
	int a[2][5] = {{1,2, , ,3},{6,7,8,9,10}};
	int i, j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<5; j++)
			printf("a[%d][%d]=%d\t", i, j, a[i][j]);
			//printf("&a[%d][%d]=%p\t", i, j, &a[i][j]);
		putchar('\n');
	}

	return 0;
}
*/

#define N	10

void init_array(int a[], int n)
{
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++)
		a[i] = rand() % 100;
}

void select_sort(int a[], int n)
{
	int i, min, j, tmp;
	for(i=0; i<n; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(a[min] > a[j])
				min = j;
		}
		tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}

void show_array(int a[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%5d", a[i]);
	}
	putchar('\n');
}

int main(void)
{
	//初始化一个数组
	int arr[N];
	init_array(arr, N);
	show_array(arr, N);

	//选择排序这个数组,升序
	select_sort(arr, N);
	//打印输出数组
	show_array(arr, N);
}
