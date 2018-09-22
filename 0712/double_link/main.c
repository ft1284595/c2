#include <stdio.h>
#include <stdlib.h>
#include "link.h"

void print_item(link p)
{
	printf("%d\t", p->item);
}

int main(void)
{
	link head;	//struct node *head
	link tail;
	link p;
	link_init(&head, &tail);	//head -> NULL
	p = make_node(3);
	link_insert(&head, &tail,  p);	//头插法
	p = make_node(5);
	link_insert(&head, &tail,  p);	//头插法
	p = make_node(1);
	link_insert(&head, &tail,  p);	//头插法
	p = make_node(8);
	link_insert(&head, &tail,  p);	//头插法
	link_travel_head(&head, print_item);//遍历打印链表的数值域
	putchar('\n');
	link_travel_tail(&tail, print_item);//遍历打印链表的数值域
	putchar('\n');
	p = link_search(&head, 1);
	if(p != NULL){
		link_delete(&head, &tail, p);
		free(p);
	}
	link_travel_tail(&tail, print_item);//遍历打印链表的数值域
	putchar('\n');
	link_destroy(&head, &tail);

	return 0;
}
