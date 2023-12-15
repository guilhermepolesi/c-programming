#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *file;
    int n, a = 0, b = 0, c = 0, space = 0, line = 0, countC = 0;

    if ((file = fopen("/home/user/test_file", "rt")) == NULL) {
        printf("Error opening a file");
        return 1;
    }

    while((n = fgetc(file)) != EOF) {
        switch (n) {
            case 'a':
                a++;
                break;
            case 'b':
                b++;
                break;
            case 'c':
                c++;
                break;
            case ' ':
                space++;
                break;
            case '\n':
                line++;
                break;
        }
        countC++;
    }

    printf("\nLines: %d", line);
    printf("\nWhitespaces: %d", space);
    printf("\nCharacters: %d", countC);
    printf("\na: %d", a);
    printf("\nb: %d", b);
    printf("\nc: %d", c);

    fclose(file);

    return 0;
}
