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

int main(void)
{
	int a[N];

	init_array(a, N);
	show_array(a, N);
	bubble_sort(a, N);
	show_array(a, N);

	return 0;
}
