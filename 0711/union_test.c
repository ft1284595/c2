#include <stdio.h>

union ITEM{
	int num;
	char s[4];
};

int main(void)
{
	int i;
	union ITEM a;
	a.num = 0x12345678;
	printf("%x\n", a.num);
	for(i=0; i<4; i++){
		printf("a[%d]=%x\n", i, a.s[i]);
		
	}

	return 0;
}
