#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int reversed_cal(char *s)
{
	int res = 0, a, b;
	char *p = s;

	if(s == NULL)
		return 0;

	p = strtok(s, " ");
	push(atoi(p));
	while((p = strtok(NULL, " ")) != NULL)
	{
		switch(*p)
		{
			case '+': 
				b = pop();
			   	a = pop(); 
				res = a + b; 
				push(res);
				break;
			case '-': 
				b = pop();
			   	a = pop(); 
				res = a - b; 
				push(res);
				break;
			case '*': 
				b = pop();
			   	a = pop(); 
				res = a * b; 
				push(res);
				break;
			case '/': 
				b = pop();
			   	a = pop(); 
				res = a / b; 
				push(res);
				break;
			default:
				push(atoi(p));
		}
	}
	return pop();
}

int main(void)
{
	int res;

	//char str[] = "64 4 + 2 / 3 *";
	char str[100];
	gets(str);
	init_stack(100);
	res = reversed_cal(str);
	printf("%d\n", res);
	destroy_stack();

	return 0;
}
