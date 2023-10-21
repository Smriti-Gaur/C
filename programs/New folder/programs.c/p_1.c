#include <stdio.h>

int main() {
    int rate = 4, principle = 100, time = 1;
    int si = (rate * principle * time) / 100;
    printf("The value of simple interest is %d\n", si);

    return 0;
}
