#ifndef STACK_H
#define STACK_H

#define PUBLIC  /* пусто */
#define PRIVATE static

PUBLIC void make_empty();
PUBLIC int is_empty();
PUBLIC int is_full();
PUBLIC void push(int i);
PUBLIC int pop();

#endif
