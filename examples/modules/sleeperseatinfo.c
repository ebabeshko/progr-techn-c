#include "sleeperseatinfo.h"
#define SEAT_MIN 1
#define SEAT_MAX 54

PRIVATE int is_valid(int n){
	return n>=SEAT_MIN && n<=SEAT_MAX;
}

PUBLIC  int is_upper (int n) {
	return is_valid(n)?n%2==0:ESEATRANGE;
}

PUBLIC  int is_coupe (int n) {
	return is_valid(n)?n<=36:ESEATRANGE;
}

PUBLIC  int get_coupe_number (int n) {
	/* To be done by students */
}
