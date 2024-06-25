#include <stdio.h>

struct st {
    unsigned char id;
    unsigned int num;
};

union un { 
    unsigned char id;
    unsigned int num;
};

int main() {

    struct st s;

    s.id = 1;
    s.num = 10;

    printf("s.id: %d\n", s.id);
    printf("s.num: %d\n", s.num);

    union un u;

    u.id = 10;

    printf("u.num: %d\n", u.num);
    printf("u.id: %d\n", u.id);
    return 0;
}
