#include <iostream>
#include <math.h>

using namespace std;

long long f(long long x) {
    long long y = x - 1;
    if (x > 0) return pow(x, f(y));
    return x;
}

int main() {
    for(int i = 0; i <= 4; i++) {
        cout << f(i) << endl;
    }
    // cout << f(5);
}