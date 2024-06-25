#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file, *copyFile, *nullCopyFile;
    char c;

    if ((file = fopen("/home/user/test_file", "rt")) == NULL) {
        printf("Error opening a file");
        return 1;
    }

    if ((copyFile = fopen("/home/user/test_file_copy", "a+")) == NULL) {
        printf("Error opening a file");
        fclose(file);
        return 2;
    }

    fseek(copyFile, 0, SEEK_END);
    if (ftell(copyFile) == 0) {
        while (fscanf(file, "%c", &c) == 1) {
            fprintf(copyFile, "%c", c);
        }
        printf("File copied to main");
    }
    else {
        if ((nullCopyFile = fopen("/home/user/test_null", "wt")) == NULL) {
        printf("Error opening a file");
        fclose(file);
        return 3;
    }
        while (fscanf(file, "%c", &c) == 1) {
            fprintf(nullCopyFile, "%c", c);
        }
        printf("Main file contains content, copy to secondary");
    }

    if (nullCopyFile != NULL) {
        fclose(nullCopyFile);
    }

    fclose(file);
    fclose(copyFile);

    return 0;
}
