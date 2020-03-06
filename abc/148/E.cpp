#include <iostream>

using namespace std;

long long count(long long d) {
    long long c = 0;
    while (d != 1) {
        ++c;
        d /= d;
    }
    return c;
}

int main() {
    long long N;
    cin >> N;
    if (N % 2 != 0) {
        cout << 0 << endl;
        return 0;
    }
    long long sum = 0;
    for(long long i = 10; i <= N; i *= 5) {
        sum += N / i;
    }
    cout << sum << endl;
    return 0;
}
