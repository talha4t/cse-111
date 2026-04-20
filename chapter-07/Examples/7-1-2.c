#include <stdio.h>

float getnum(void);

int main() {

    float i;

    i=getnum();

    printf("%f",i);

    return 0;

}

float getnum(void) {

    float x;

    printf("Enter a number: ");

    scanf("%f",&x);

    return x;

}
