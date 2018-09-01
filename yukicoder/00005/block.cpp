#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int L, N;
    int W[10000];
    cin >> L;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> W[i];
    sort(W, W + N);
    int sum = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (sum + W[i] > L) break;
        sum += W[i];
        count++;
    }
    cout << count << endl;
    return 0;
}
