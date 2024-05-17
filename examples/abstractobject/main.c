#include <stdio.h>
#include "stack.h"

int main() {
	// Is Empty
	printf("Stack is empty? %d\n", is_empty());
	// Make Empty
	make_empty();
	// Is Empty
	printf("Stack is empty? %d\n", is_empty());
	// Push
	push(503);
	// Is Empty
	printf("Stack is empty? %d\n", is_empty());
	push(2000);
	push(1);
	push(2);
	push(3);
	// Is Empty
	printf("Stack is empty? %d\n", is_empty());
	// Is Full
	printf("Stack is full? %d\n", is_full());
	// Pop
	printf("Pop: %d\n", pop());
	printf("Pop: %d\n", pop());
	printf("Pop: %d\n", pop());
	printf("Pop: %d\n", pop());
	printf("Pop: %d\n", pop());
}
