#include <stdlib.h>
#include <stdio.h>
#define ASSERT(condition, message) \
if (!(condition)) \
{ \
 printf("ASSERTION FAILED: %s\n", message); \
 exit(EXIT_FAILURE); \
}

int get_coupe_number(int n){
	/* Check preconditions: */
	ASSERT(x>=0, "Value should not be negative");
	ASSERT(x>=SEAT_MIN && x<=SEAT_MAX, "Value should be within range");
	int result;
	/* TODO: Implement calculation */
	result = 0;	
	/* Check postconditions: */
	return result;
}
