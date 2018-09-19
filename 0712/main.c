#include <stdio.h>
#include "stack.h"

int main(void)
{
	char *str = "abcde";
	init_stack(3);
	while(*str != '\0'){
		push(*str);
		str ++;
	}

	while(!is_empty()){
		putchar(pop());
	}

	putchar('\n');
	destroy_stack();

	return 0;
}
