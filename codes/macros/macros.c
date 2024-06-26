#include <stdio.h>
#include "functions.h"

#define MSG "Default MSG"
#define SIZE 1024
#define QUAD(x) (x * x)
#define MAX(x, y) (x > y ? x : y)
#define VAR(x) printf("The variable "#x" has the value: %d\n", x);

#define DEBUG

#ifndef MY_DEF // MY_DEF is not defined
#define MY_DEF // MY_DEF is defined 
#endif
#undef MY_DEF // MY_DEF is no longer defined

int main() {

    print("Hello"); // functions.h
    int result = sum(10, 10, 10); // functions.h
    printf("%d\n", result);
    printf("%s\n", MSG);

    char buffer[SIZE] = { '\0' };

    printf("Enter: ");
    scanf("%s", &buffer);

    printf("You entered:\n%s\n", buffer);

    printf("%d\n", QUAD(8));
    printf("%d\n", MAX(3,9));

    int var = 10;


#ifdef DEBUG
    printf("I'm on the line %d\n", __LINE__);
    printf("Time: %s\n", __TIME__);
    VAR(var);
#elif defined(TEST)
    puts("Test mode activated");
#else
    puts("Default code executed");
#endif
    return 0;
}
