#include <stdio.h>
#include <stdlib.h>

struct LinkNumber {
    int number;
    struct LinkNumber *next;
    struct LinkNumber *prev;
};

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{

    int i, n;
    printf ("Numbers to link: ");
    scanf("%d", &n);
    clearBuffer();

    struct LinkNumber *head = NULL;
    struct LinkNumber *tail = NULL;
    for (i = 0; i < n; i++) {
        struct LinkNumber *link = (struct LinkNumber *) malloc(sizeof(struct LinkNumber));

        if (link == NULL) {
            puts("Error allocating memory");
            return 1;
        }

        int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        link->number = number;
        link->next = NULL;
        link->prev = NULL;

        if (head == NULL) {
            head = link;
            tail = link;
        }
        else {
            tail->next = link;
            link->prev = tail;
            tail = link;
        }
    }

    struct LinkNumber *current = head;
    puts("Ascending order:");
    while (current != NULL) {
        printf("%d\n", current->number);
        current = current->next;
    }

    struct LinkNumber *reverse = tail;
    puts("Descending order:");
    while(reverse != NULL) {
        printf("%d\n", reverse->number);
        reverse = reverse->prev;
    }

    struct LinkNumber *ptr = head;
    while (ptr != NULL) {
        struct Person *memory = ptr;
        ptr = ptr->next;
        free(memory);
    }

    return 0;
}
