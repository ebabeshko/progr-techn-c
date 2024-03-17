#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/**  * Очищення потоку введення
	* @return 1, коли очищення завершене
	*/
int clean_stdin() {
	while (getchar() != '\n');
	return 1;
}

int main() {
	int val = 0; char c;
	do {
		printf("\nEnter an integer ");
	} while
		(((scanf("%d%c", &val, &c) != 2 || c != '\n') && clean_stdin()));
	printf("\nSuccess. You entered %d ", val);
	return 0;
}
