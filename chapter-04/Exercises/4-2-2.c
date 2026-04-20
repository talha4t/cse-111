#include <stdio.h>

float soundspeed(float a);

int main() {

    float s;

    float d;

    printf("Input distance in feet:");

    scanf("%f",&d);

    s=soundspeed(d);

    printf("your time is %f second",s);

    return 0;

}

float soundspeed(float a) {

    float b;

    b=a/1129;

    return b;

}
