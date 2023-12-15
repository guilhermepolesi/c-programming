#include <stdio.h>
#include <stdlib.h>

void printArrPtr(int **arr, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j, n;

    printf("Number of rows and columns to allocate: ");
    scanf("%d", &n);
    int *arrPtr[n];

    for (i = 0; i < n; i++) {
        arrPtr[i] = (int *) malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            arrPtr[i][j] = (n * i) + j + 1;
        }
    }
    printArrPtr(arrPtr, n);

    for (i = 0; i < n; i++) {
        free(arrPtr[i]);
    }

    return 0;
}
