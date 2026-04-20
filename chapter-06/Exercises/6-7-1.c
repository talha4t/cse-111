#include <stdio.h>

void mystrcat(char *to,char *from);

int main() {

    char str[80]="this is";

    mystrcat(str," a test");

    printf(str);

    return 0;

}

void mystrcat(char *to,char *from) {

    while (*to)

        to++;

    while (*from)

        *to++=*from++;

    *to='\0';

}
