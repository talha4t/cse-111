#include <stdio.h>

void f(int *p);

int main() {

    int i;

    f(&i);

    printf("%d",i);

    return 0;

}

void f(int *p) {

    *p=-1;

}
