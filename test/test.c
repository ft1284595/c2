#include <stdio.h>

int main(void)
{
	int i = 3, j = 4;
	i:i++ ? ++ j;
	printf("i=%d\tj=%d\n", i, j);

	return 0;
		  
}
