#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct linkedlist_node
{
	struct linkedlist_node *	_M_next;
	void *				_M_ptr;
};
struct linkedlist
{
	struct linkedlist_node *	_M_head;
};

struct linkedlist *		linkedlist_new();
struct linkedlist_node *	linkedlist_node_new();

struct linkedlist_node *	linkedlist_tail(
		struct linkedlist * list);

void				linkedlist_push_back(
		struct linkedlist * list,
		void* p);

#endif

