#ifndef _LINK_H_
#define _LINK_H_

typedef struct node *link;
struct node{
	int item;
	link next;	//struct node *next;
	link pre;
};

void link_init(link *head, link *tail);
link make_node(int item);
void link_insert(link *head, link *tail, link p);
link link_search(link *head, int key);
void link_delete(link *head, link*tail, link p);
void free_node(link p);
void link_modify(link p, int key);
void link_destroy(link *head, link *tail);
void link_travel_head(link *head, void (*visit)(link));
void link_travel_tail(link *tail, void (*visit)(link));

#endif
