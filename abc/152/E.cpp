#include <cstdio>
#include <iostream>

long gcd(long a, long b) {
    if(a < b) {
        std::swap(a, b);
    }
    return b == 0 ? a : gcd(b, a % b);
}

long lcm(long a, long b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    const int SIZE = 10007;
    const long FOO = (1000000000 + 7);
    long A[SIZE];
    long prod = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &A[i]);
        prod = lcm(prod, A[i]);
    }
    long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += prod / A[i];
        if (sum > FOO) sum = sum % FOO;
    }
    printf("%ld\n", sum);
    return 0;
}
