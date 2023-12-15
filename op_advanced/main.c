#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[12];
    printf("Type a word: ");
    fgets(word, sizeof(word), stdin);

    int length = strlen(word);
    for (int i = length; i >= 0; i--) {
        printf("%c", word[i]);
    }


    return 0;
}
