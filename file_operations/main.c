#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file, *fileCopy;
    int n;

    if ((file = fopen("/home/user/test_file", "rt")) == NULL) {
        printf("Error opening a file");
        return 1;
    }

    if ((fileCopy = fopen("/home/user/test_file_copy", "wt")) == NULL) {
        printf("Error opening a file");
        fclose(file);
        return 2;
    }

    while (fscanf(file, "%d", &n) == 1) {
        fprintf(fileCopy, "%d", n);
    }

    printf("Copy of source file with line numbers");

    fclose(file);
    fclose(fileCopy);

    return 0;
}
