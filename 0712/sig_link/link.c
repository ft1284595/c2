#include <stdio.h>
#include <stdlib.h>
#include "link.h"

void link_init(link *head){ //struct node **head = &实参head
	*head = NULL;
}
link make_node(int item){
	//link p = (link *)malloc(sizeof(struct node));
	link p = (link)malloc(sizeof(*p));
	p->item = item;	//(*p).item = item;
	p->next = NULL;	//#define NULL (void *) 0
	return p;
}
void link_insert(link *head, link p){
	p->next = *head;
	*head = p;
}
link link_search(link *head, int key){
	link p;
	for(p=*head; p != NULL; p=p->next){
		if(p->item == key){
			return p;
		}
	}
	return NULL;

}
void link_delete(link *head, link p){
	link pre;
	if(p == *head){
		*head = p->next;
		return;
	}
	for(pre=*head; pre!= NULL; pre = pre->next){
		if(pre->next == p){
			pre->next = p->next;
			return ;
		}
	}
}
void free_node(link p){
	free(p);
}
void link_modify(link p, int key){
	p->item = key;
}
void link_destroy(link *head){
	link p, q;
	p = *head;
	while(p != NULL){
		q = p->next;
		free(p);
		p = q;
	}
	*head = NULL;
}
void link_travel(link *head, void (*visit)(link)){
	link p;
	for(p=*head; p!=NULL; p=p->next){
		visit(p);
	}
}

