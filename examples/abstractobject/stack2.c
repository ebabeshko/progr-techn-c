#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
	int data;
	struct node* next;
};
PRIVATE struct node* top = NULL;

PRIVATE void terminate(const char* message)
{
	printf("%s\n", message);
	exit(EXIT_FAILURE);
}

PUBLIC void make_empty()
{
	while (!is_empty())
		pop();
}

PUBLIC int is_empty()
{
	return top == NULL;
}

PUBLIC int is_full()
{
	return 0;
}

PUBLIC void push(int i)
{
	struct node* new_node = malloc(sizeof(struct node));

	if (new_node == NULL)
		terminate("push: Stack is full.");

	new_node->data = i;
	new_node->next = top;
	top = new_node;
}

PUBLIC int pop()
{
	struct node* old_top;
	int i;

	if (is_empty())
		terminate("pop: Stack is empty.");

	old_top = top;
	i = top->data;
	top = top->next;
	free(old_top);
	return i;
}
