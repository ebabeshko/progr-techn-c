/**
 * @file print_ascii.c
 * @brief Виведення таблиці ASCII
 * @details
 * Простий приклад виведення ASCII-символів з кодами 0x20..0x7F
*/

#include <stdio.h>

int main() {
    int j;
    char c;

    printf("   |");                 // Перший рядок заголовка
    for (c = '0'; c <= '9'; c++)
        printf(" .%c", c);
    for (c = 'A'; c <= 'F'; c++)
        printf(" .%c", c);
    printf("\n");

    printf("   |");                 // Другий рядок заголовка
    for (int i = 1; i <= 16; i++)
        printf("---");
    printf("\n");

    for (int i = 2; i <= 7; i++) {  // Таблиця, рядок за рядком
        printf(" %d.|", i);
        for (j = 0; j < 16; j++)    // Виведення символа
            printf("  %c", i * 16 + j);
        printf("\n");
    }

    return 0;
}
