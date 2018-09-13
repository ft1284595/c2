#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N	10

void init_array(int a[], int n)
{
	int i;

	srand(time(NULL));
	for(i=0; i<n; i++)
	{
		a[i] = rand() % 100;
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
void swap(int *x, int *y)
{
	int tmp; 
	tmp = *x;
	*x = *y;
	*y = tmp;
}
void bubble_sort(int a[], int n)
{
	int i, j;

	for(i=0; i<n; i++)
		for(j=0; j<n-i-1; j++)
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
}
/*
void bubble_sort(int a[], int n)
{
	//this is not a bubble sort.
	int i, j, tmp;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
*/

/**
 *	找到return 1, else return 0
 *
 */
int search_r(int a[], int l, int r, int key)
{
	int mid;
	if(l > r)	
		return 0;
	mid = (l+r) / 2;
	if(a[mid] > key)
		search_r(a, l, mid-1, key);
	else if(a[mid] < key)
		search_r(a, mid+1, r, key);
	else 
		return 1;
}

int search(int a[], int l, int r, int key)
{
	int mid;
	while(l <= r)
	{
		mid = (l+r) / 2;
		if(a[mid] > key)
			r = mid -1;
		else if(a[mid] < key)
			l = mid + 1;
		else 
			return 1;
	}
	return 0;
}

int main(void)
{
	int a[N];
	int num, res;

	init_array(a, N);
	show_array(a, N);
	scanf("%d", &num);
	bubble_sort(a, N);
	//res = search_r(a, 0, N-1, num);
	res = search(a, 0, N-1, num);
	if(res)
		printf("find %d in array\n", num);
	else
		printf("un find\n");
	show_array(a, N);

	return 0;
}
