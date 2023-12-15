#include <stdio.h>
#include <stdlib.h>

struct Element {
    int value;
    struct Element *next;
};


int main()
{
    int i, array[10] = {2, 4, 5, 6, 7, 8, 9, 1, 3, 0};

    struct Element *head = NULL;
    for (i = 0; i < 10; i++) {
        struct Element *element = (struct Element *) malloc(sizeof(struct Element));
        if (element == NULL) {
            puts("Error allocating memory");
            return 1;
        }

        element->value = array[i];
        element->next = NULL;

        if (head == NULL) {
            head = element;
        }
        else {
            struct Element *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = element;
        }
    }

    struct Element *ptr = head;
    puts("First 5 values:");
    for (i = 0; i < 5; i++) {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = head;
    puts("First 7 values:");
    for (i = 0; i < 7; i++) {
        printf("%d\n", ptr->value);
        ptr = ptr->next;
    }

    ptr = head;
    while (ptr != NULL) {
        struct Element *memory = ptr;
        ptr = ptr->next;
        free(memory);
    }

    puts("Memory is freed");

    return 0;
}
