#include <stdlib.h>
#include <stdio.h>

long long f(long long x) {
    long long y = x - 1;
    if (x > 0) return pow(x, f(y));
    return x;
}

int main() {
    for(int i = 0; i <= 4; i++) {
        printf("%d", f(i));
        printf("\n");
    }
}