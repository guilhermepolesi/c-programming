#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j, number, **ptrMat;
    printf("Type a number: ");
    scanf("%d", &number);

    if (number > 20) {
        puts("Matrix too big");
        return 1;
    }

    ptrMat = (int **) malloc((number+1) * sizeof(int *));
    if (ptrMat == NULL) {
        puts("Allocation failure");
        return 1;
    }

    for (i = 0; i <= number; i++) {
        ptrMat[i] = (int *) malloc(sizeof(int) * (i + 1));
    }

    for (i = 0; i <= number; i++) {
        for (j = 0; j <= number; j++) {
            if (i == 0 && j == 0) {
                printf("  ");
            }
            else if (i == 0) {
                ptrMat[i][j] = j;
                printf("%d ", ptrMat[i][j]);
            }
            else if (j == 0) {
                ptrMat[i][j] = i;
                printf("%d ", ptrMat[i][j]);
            }
            else {
                ptrMat[i][j] = i * j;
                printf("%d ", ptrMat[i][j]);
            }
        }
        printf("\n");
    }


    free(ptrMat);

    return 0;
}
