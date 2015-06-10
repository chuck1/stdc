#include <stdlib.h>

#include <linkedlist.h>

struct linkedlist *		linkedlist_new()
{
	struct linkedlist * l = (struct linkedlist *)malloc(sizeof(struct linkedlist));
	l->_M_head = 0;
	return l;
}
struct linkedlist_node *	linkedlist_node_new(void * p)
{
	struct linkedlist_node * l = (struct linkedlist_node *)malloc(sizeof(struct linkedlist_node));
	l->_M_next = 0;
	l->_M_ptr  = p;
	return l;
}
struct linkedlist_node *	linkedlist_tail(
		struct linkedlist * list)
{
	struct linkedlist_node * n = list->_M_head;
	
	if(n == 0) return 0;
	
	while(1)
	{
		if(n->_M_next == 0) return n;
		n = n->_M_next;
	}
}
void			linkedlist_push_back(
		struct linkedlist * list,
		void* p)
{
	struct linkedlist_node * n = linkedlist_node_new(p);

	struct linkedlist_node * tail = linkedlist_tail(list);

	if(tail == 0) {
		list->_M_head = n;
	} else {
		tail->_M_next = n;
	}
}


