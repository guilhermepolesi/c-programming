#include <stdio.h>
#include <stdlib.h>

int checkLargerMatrix(int **m1, int **m2, int n) {
    int i, j, countM1 = 0, countM2 = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            countM1 += m1[i][j];
            countM2 += m2[i][j];
        }
    }

    if (countM1 > countM2) {
        return 1;
    }
    else if (countM1 < countM2) {
        return -1;
    }
    else {
        return 0;
    }
}

void printCompMatrix(int n) {
    if (n == 1) {
        puts("Matrix A is greater than matrix B");
    }
    else if (n == -1) {
        puts("Matrix B is greater than matrix A");
    }
    else {
        puts("Both matrices are equal.");
    }
}

int main()
{
    int i, j, n, **matrixA, **matrixB, value;
    puts("Enter the matrices to compare");
    printf("Enter the size of the matrix A: ");
    scanf("%d", &n);
    matrixA = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matrixA[i] = (int *) malloc(n * sizeof(int));
    }

    puts("Enter the values of the matrix A");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nRow %d Column %d: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the size of the matrix B: ");
    scanf("%d", &n);
    matrixB = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matrixB[i] = (int *) malloc(n * sizeof(int));
    }

    puts("Enter the values of the matrix B");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("\nRow %d Column %d: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    value = checkLargerMatrix(matrixA, matrixB, n);
    printCompMatrix(value);

    for (i = 0; i < n; i++) {
        free(matrixA[i]);
        free(matrixB[i]);
    }

    return 0;
}
