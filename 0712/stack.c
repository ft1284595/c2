#include <stdio.h>
#include <stdlib.h>
/*
static char stack[512] = {0};	//数据栈
static int top = 0;		//栈指针

void push(char ch)
{
	stack[top++] = ch;
}
char pop(void)
{
	return stack[--top];
}
int is_empty(void)
{
	return top == 0;
}
int is_full(void)
{
	return top == 512;
}
*/
static int sz = 512;
static char *stack;	//数据栈
static int top = 0;		//栈指针

void init_stack(int size)
{
	if (size == 0){
		size = sz;
	}else{
		sz = size;
	}
	stack = (char *)malloc(sz);
}

void destroy_stack(void){
	free(stack);
}

void push(char ch)
{
	if(top == sz){
		sz += sz;
		stack = (char *)realloc(stack, sz);
	}
	stack[top++] = ch;
}
char pop(void)
{
	return stack[--top];
}
int is_empty(void)
{
	return top == 0;
}
int is_full(void)
{
	return top == sz;
}

