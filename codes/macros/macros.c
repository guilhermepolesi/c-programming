#include <stdio.h>
#include "functions.h"

#define MSG "Default MSG"
#define SIZE 1024
#define QUAD(x) (x * x)
#define MAX(x, y) (x > y ? x : y)
#define VAR(x) printf("The variable "#x" has the value: %d\n", x);

#define DEBUG 

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
#endif    
    return 0;
}
