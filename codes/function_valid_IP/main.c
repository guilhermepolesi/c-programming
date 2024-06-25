#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int checkIp(char *address) {
    if (!isdigit(address[0])) {
            return 0;
        }
    int i, j, aux[3], *ptr, fieldCount = 1, count = 0;
    ptr = aux;
    for (i = 0; address[i] != '\0'; i++) {
        ptr = &aux[count];
        if (count < 3 && isdigit(address[i])) {
            *ptr = address[i] - '0';
            count++;
        }
        else if (count > 0 && count <= 3 && address[i] == '.') {
            int n = 0;
            for (j = 0; j < count; j++) {
                if (isdigit(aux[j]) + '0') {
                    n = n * 10 + aux[j];
                }
                else {
                    return 0;
                }
            }
            if (n < 0 || n > 255) {
                return 0;
            }
            count = 0;
            fieldCount++;
        }
        else {
            return 0;
        }
    }
    if (fieldCount < 4) {
        return 0;
    }
    return 1;
}

void printValidAddress(char *address) {
    if (checkIp(address)) {
        printf("%s is a valid IP address", address);
    }
    else {
        printf("%s is not a valid IP address", address);
    }
}

int main()
{
    char address[16];

    for (int i = 0; i < 5; i++) {
        printf("Enter the IP address: ");
        fgets(address, sizeof(address), stdin);
        address[strcspn(address, "\n")] = '\0';

        printValidAddress(address);
        printf("\n\n");
    }

    return 0;
}
