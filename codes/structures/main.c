#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[20];
    struct Person *next;
};

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{
    int i, n;
    printf("Enter the number of names to save: ");
    scanf("%d", &n);
    clearBuffer();
    struct Person *head = NULL;
    for (i = 0; i < n; i++) {
        struct Person *person = (struct Person *) malloc(sizeof(struct Person));

        if (person == NULL) {
            puts("Error allocating memory");
            return 1;
        }

        printf("Enter a name: ");
        fgets(person->name, sizeof(person->name), stdin);
        person->name[strcspn(person->name, "\n")] = '\0';

        person->next = NULL;

        if (head == NULL) {
            head = person;
        }
        else {
            struct Person *current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = person;
        }
    }

    struct Person *ptr = head;
    while (ptr != NULL) {
        printf("Name: %s\n", ptr->name);
        ptr = ptr->next;
    }

    ptr = head;
    while (ptr != NULL) {
        struct Person *memory = ptr;
        ptr = ptr->next;
        free(memory);
    }

    return 0;
}
