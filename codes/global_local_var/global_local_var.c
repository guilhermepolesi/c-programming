#include <stdio.h>

int i; // global var

void func() {
    int j; // local var

    for (i = 0; i < 3; i++) {
        printf("%d\n", i);
  }

    for (j = 0; j < 3; j++) {
        printf("%d\n", j);
    }
}

int main() {

    func();
   
    i = 10;
    printf("%d\n", i);

 // j = 10; error: ‘j’ undeclared
    return 0;
}
