#include <stdio.h>
#include "link.h"

void print_item(link p)
{
	printf("%d\t", p->item);
}

int main(void)
{
	link head;	//struct node *head
	link p;
	link_init(&head);	//head -> NULL
	p = make_node(3);
	link_insert(&head, p);	//头插法
	p = make_node(5);
	link_insert(&head, p);	//头插法
	p = make_node(1);
	link_insert(&head, p);	//头插法
	p = make_node(8);
	link_insert(&head, p);	//头插法
	link_travel(&head, print_item);//遍历打印链表的数值域
	putchar('\n');
	p = link_search(&head, 1);
	if(p != NULL){
		link_delete(&head, p);
		free(p);
	}
	link_travel(&head, print_item);//遍历打印链表的数值域
	putchar('\n');
	link_destroy(&head);

	return 0;
}
