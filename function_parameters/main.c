#include <stdio.h>
#include <stdlib.h>

double square(double a) {
    double result = a * a;
    return result;
}

int main()
{
    int i, n;
    printf("How many numbers do you want to see the result of the square: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        double number, result;
        printf("Enter the %dº number: ", i+1);
        scanf("%lf", &number);
        printf("Square of %.2lf is %.2lf", number, square(number));
        printf("\n\n");
    }



    return 0;
}
