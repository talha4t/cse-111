#include <stdio.h>

int series(void);

int main() {

    int i;

    for (i=0;i<10;i++) printf("%d ",series());

    return 0;

}

int series(void) {

    static int total=0;

    total=(total+1423)%1422;

    return total;

}
