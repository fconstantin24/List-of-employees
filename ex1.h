#ifndef LIST_H
#define LIST_H

typedef struct node{
	int val;
	
	struct node *next;
} node_t;


node_t *append_node(node_t *list_head, int val);


void print_list(node_t *list_head);


node_t *prepend_node(node_t *list_head, int val);


node_t *get_node(node_t *list_head, int val);


node_t *modify_node(node_t *list_head, int val, int new_val);


node_t *insert_node(node_t *list_head, int val, int after_val);


node_t *remove_node(node_t *list_head, int val);


#endif
