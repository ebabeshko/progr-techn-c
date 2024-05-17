#include<stdlib.h>
#include<stdio.h>
#include "stack.h"
#define STACK_SIZE 100

PRIVATE int contents[STACK_SIZE];
PRIVATE int top = 0;

PRIVATE void terminate(const char* msg) {
	printf("%s",msg);
	exit(EXIT_FAILURE);
}

PUBLIC void make_empty() {
	top = 0;
}

PUBLIC int is_empty() {
	return (top == 0);
}

PUBLIC int is_full() {
	return (top == STACK_SIZE);
}

PUBLIC void push(int i) {
	if (is_full())
		terminate("push: Stack is full");
	contents[top++] = i;
}
PUBLIC int pop() {
	if (is_empty()) {
		terminate("pop: Stack is empty");
	}
	return contents[--top];
}
