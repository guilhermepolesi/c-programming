#include <stdio.h>
void func() {
    register int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
}

int main() {

    func();

    return 0;
}
