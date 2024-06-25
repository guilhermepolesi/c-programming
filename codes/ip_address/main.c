#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int i, length;
    char address[16], *ptrAddress;
    fgets(address, sizeof(address), stdin);

    length = strlen(address);
    printf("\nLast 3 parts: ");
    ptrAddress = &address[4];
    for (i = 0; i < length; i++) {
        printf("%c", ptrAddress[i]);
    }

    printf("\nLast 2 parts: ");
    ptrAddress = &address[8];
    for (i = 0; i < length; i++) {
        printf("%c", ptrAddress[i]);
    }

    printf("\nLast 1 part: ");
    ptrAddress = &address[12];
    for (i = 0; i < length; i++) {
        printf("%c", ptrAddress[i]);
    }

    return 0;
}
