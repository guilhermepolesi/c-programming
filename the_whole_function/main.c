#include <stdio.h>
#include <stdlib.h>

double powerFunc(double base, int exponent) {
    double result = base;
    for (int i = 1; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main()
{
    double twentyFiveValue = powerFunc(5.0, 2);
    double piSquaredValue = powerFunc(3.14159265, 2);
    double piCubedValue = powerFunc(3.14159265, 3);
    double bigPower = powerFunc(1.23, 20);
    double millionValue = powerFunc(10, 6);

    printf("Thirty five: %.4f\n", twentyFiveValue);
    printf("Pi squared: %.4f\n", piSquaredValue);
    printf("Pi cubed: %.4f\n", piCubedValue);
    printf("Not so big number: %.4f\n", bigPower);
    printf("Million: %.4f\n", millionValue);

    return 0;
}
