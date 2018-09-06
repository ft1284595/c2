#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//void init_array(int arr[], int n)
void init_array(int *arr, int n)
{
	int i;

	//arr[3] = 5;		//*(arr+3) = 5;
	
	srand(time(NULL));			//srand(time(NULL));
	for(i=0; i<n; i++){
		arr[i] = (rand() % 100);
	}
}

void show_array(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
		printf("%d\t", arr[i]);
	putchar('\n');
		
}

int main(void)
{
	/**
	int i = 3;
	int *p;
	printf("&i = %p\n", &i);
	printf("p = %p\t*p = %d\n", p, *p);
	*/
	
	int a[10];

	init_array(a, 10);
	show_array(a, 10);

	return 0;
}
