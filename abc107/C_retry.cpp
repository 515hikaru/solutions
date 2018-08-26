#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int n = N;
    int a[100000];
    int c;
    bool conczero = false;
    for (int i = 0; i < N; i++) {
        cin >> c;
        if (c == 0) {
            K = K - 1;
            n = N - 1;
        }
        a[i] = c;
    }
    if (K == 0) {
        cout << 0 << endl;
        return 0;
    }
    int b[10000];
    int j = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            continue;
        }
        b[j] = a[i];
        j++;
    }
    int min_distance = -1;
    int min_dis;
    for (int l = 0; l < n - K + 1; l++) {
        int r = l + K - 1;
        int l_dis = abs(b[l]) + abs(b[r] - b[l]);
        int r_dis = abs(b[r]) + abs(b[r] - b[l]);
        min_dis = min(l_dis, r_dis);
        if (min_dis < min_distance || min_distance < 0) {
            min_distance = min_dis;
        }
    }
    cout << min_distance << endl;
    return 0;
}
