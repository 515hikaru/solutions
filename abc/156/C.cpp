#include <iostream>
using namespace std;

int mean(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum / n;
}

int main() {
    int N;
    int X[100];
    cin >> N;
    for(int i = 0; i < N; ++i) {
        cin >> X[i];
    }
    int p = mean(X, N);
    int p2 = p + 1;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += (X[i] - p) * (X[i] - p);
        sum2 += (X[i] - p2) * (X[i] - p2);
    }
    if (sum1 < sum2) cout << sum1;
    else cout << sum2;
    cout << endl;
    return 0;
}
