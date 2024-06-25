#include <stdio.h>

#define SIZE 8

int main() {

    char s[30] = "Ritchie";

    for (int i = 0; i < 30; i++) {
        putchar(s[i]);
    }
    putchar('\n');

    char n[10] = "Thompson";

    printf("%c\n", n[7]);
    printf("%c\n", *(n+7));

    printf("%c\n", 7[n]);
    printf("%c\n", *(7+n));

    int i, j, board[SIZE][SIZE] = { 0 };

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("[%d][%d] = %d ", i, j, board[i][j]);
            if (j == SIZE-1) {
                putchar('\n');
            }
        }
    }
    
    return 0;
}
