#include <stdio.h>
#include <stdbool.h>

void print(char *s) {
    while (*s != '\0') {
        putchar(*s++);
    }
    printf("\n");
}

int main() {
    
    int a[] = { 10, 20, 30 };
    printf("Array memory address: %p\n", a);
    printf("Value that is pointing: %d\n", *a);

    int i = 2000;
    int *p;

    p = &i;

    printf("The address of variable i in memory is: %p\n", &i);
    printf("The address of variable i in memory is: %p\n", p);
    printf("The value of i is: %d\n", *p);

    char name_a[] = "Ritchie";
    char *name_b = "Thompson";

    puts(name_a);
    puts(name_b);

    print(name_a);
    
    return 0;
}
