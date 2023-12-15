#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, *ptrNumber;
    printf("Type a number: ");
    scanf("%d", &number);

    if (number > 1024 * 1024) {
        puts("Too much memory requested.");
        return 1;
    }
    ptrNumber = (char *) malloc(number * sizeof(char));
    if (ptrNumber == NULL) {
        puts("Allocation failed.");
        return 1;
    }

    char asciiChar = 'A';
    for (int i = 0; i <= number; i++) {
        ptrNumber[i] = asciiChar;
        asciiChar++;
        if (asciiChar > 'Z') {
            asciiChar = 'A';
        }
    }

    for (int i = 0; i < 400; i++) {
        printf("%c", ptrNumber[i]);
        if (ptrNumber[i] == 'Z') {
            printf("\n");
        }
        if (i == number) {
            break;
        }
    }

    free(ptrNumber);

    return 0;
}
