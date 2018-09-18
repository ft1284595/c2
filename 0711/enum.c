#include <stdio.h>
/*
#define RED 0
#define BLACK 1
#define BLUE 2
*/

//enum ITEM {RED, BLACK, BLUE, WHITE, GREEN};
enum ITEM {RED, BLACK, BLUE=10, WHITE, GREEN};

int main(void)
{
	enum ITEM c1;
	c1 = RED;
	//RED = GREEN;
	printf("%d\n", c1);

	return 0;
}
