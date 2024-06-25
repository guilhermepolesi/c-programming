#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
    ptr = malloc(size); \
    if (ptr == NULL) { \
        fprintf(stderr, "Insufficient memory\n"); \
        exit(1); \
    } \
}

void *malloc_s(size_t size) {
    void *p;
    p = malloc(size);
    if (p == NULL) {
        fprintf(stderr, "Insufficient memory\n");
        exit(1);
    }
    return p;
}

int main() {

    int *p;

    p = malloc(sizeof(int));

    if (p == NULL) {
        return 1;
    }
    
    *p = 9;    

    printf("%d\n", *p);
    free(p);

    int *p2;
    p2 = malloc_s(sizeof(int));

    *p2 = 10;
    printf("%d\n", *p2);
    free(p2);

    int *p3;
    MALLOC(p3, sizeof(int));
    *p3 = 100;
    printf("%d\n", *p3);
    free(p3);

    int *p4;
    MALLOC(p4, 5 * sizeof(int));
    memset(p4, 0, 5 * sizeof(int)); // Starting bytes with zeros
    *p4 = 200;
    *(p4 + 1) = 300;
    *(p4 + 2) = 400;
    *(p4 + 3) = 500;
    *(p4 + 4) = 600;
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(p + i));
    }

    p4 = realloc(p4, sizeof(int) * 6);
    *(p + 5) = 700;
    printf("%d\n", *(p + 5));
    free(p4);

    return 0;
}
