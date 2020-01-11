#include <iostream>

using namespace std;

int main() {
    int N, K;
    int anss[20000];
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        int a = i + 1;
        int count = 0;
        for (int b = K - a; b < N + 1; b += K) {
            if (b < 1) continue;
            for (int c = K - b; c < N + 1; c += K) {
                // cout << "a = " << a << " b = " << b << " c = " << c << endl;
                if (c < 1) continue;
                int cc = c + a;
                if (cc % K == 0) count++;
            }
        }
        anss[i] = count;
    }
    int count = 0;
    int divide = N / K;
    for (int i = 0; i < K; i++) {
        count += anss[i] * divide;
    }
    for (int i = 0; i < N % K; i++) {
        count += anss[i];
    }
    cout << count << endl;
}
