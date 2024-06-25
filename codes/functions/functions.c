#include <stdio.h>
#include <stdlib.h>

int sum(int n1, int n2, int n3) {
    check_positive_numbers(n1, n2, n3);
    int result = n1 + n2 + n3;
    return result;
}

void my_exit() {
    printf("END\n");
    exit(0);
}

int check_positive_numbers(int n1, int n2, int n3) {
    if (n1 < 0 || n2 < 0 || n3 < 0) {
        printf("ERROR\n");
        exit(1);
    }
}


int main() {

    int i, n1, n2, n3;
    
    puts("Enter positive numbers for the sum:");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    check_positive_numbers(n1, n2, n3);

    int result = sum(n1, n2, n3);
    printf("Sum: %d\n", result);

    printf("The sum address is: %p\n", sum);

    my_exit();


    return 0;
}
