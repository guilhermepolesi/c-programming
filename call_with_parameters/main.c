#include <stdio.h>
#include <stdlib.h>

double getMaxOfThree(double paramA, double paramB, double paramC) {
    if (paramA > paramB && paramA > paramC) {
        return paramA;
    }
    else if (paramB > paramC) {
        return paramB;
    }
    else {
        return paramC;
    }
}

int main()
{
    double tenValue = getMaxOfThree(5, 9, 10);
    double bigValue = getMaxOfThree(555.4, 555.3, 556.4);
    printf("Ten: %.2f\n", tenValue);
    printf("Bigest value: %.2f\n", bigValue);

    return 0;
}
