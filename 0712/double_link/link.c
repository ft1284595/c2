#include <stdio.h>
#include <stdlib.h>
#include "link.h"

void link_init(link *head, link *tail){ //struct node **head = &实参head
	*head = NULL;
	*tail = NULL;
}
link make_node(int item){
	//link p = (link *)malloc(sizeof(struct node));
	link p = (link)malloc(sizeof(*p));
	p->item = item;	//(*p).item = item;
	p->next = NULL;	//#define NULL (void *) 0
	p->pre = NULL;
	return p;
}
void link_insert(link *head, link *tail, link p){	//头插法
	link q;
	if(*head == NULL){
		*head = p;
		*tail = p;
		return;
	}
	p->next = *head;
	(*head)->pre = p;
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
void link_delete(link *head, link *tail, link p){
	if(p == *head){
		*head = p->next;
		(*head)->pre = NULL;
		return;
	}
	if(p == *tail){
		*tail = p->pre;
		(*tail)->next = NULL;
	}
	p->pre->next = p->next;
	p->next->pre = p->pre;
}
void free_node(link p){
	free(p);
}
void link_modify(link p, int key){
	p->item = key;
}
void link_destroy(link *head, link *tail){
	link p, q;
	p = *head;
	while(p != NULL){
		q = p->next;
		free(p);
		p = q;
	}
	*head = NULL;
	*tail = NULL;
}
void link_travel_head(link *head, void (*visit)(link)){
	link p;
	for(p=*head; p!=NULL; p=p->next){
		visit(p);
	}
}

void link_travel_tail(link *tail, void (*visit)(link)){
	link p;
	for(p=*tail; p!=NULL; p=p->pre){
		visit(p);
	}
}
