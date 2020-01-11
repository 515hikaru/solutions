#include <iostream>

using namespace std;

int main() {
    int N;
    int T;
    int c[100], t[100];
    cin >> N >> T;
    for (int i = 0; i < N; i++) {
        cin >> c[i] >> t[i];
    }
    int m = -1;
    for (int i = 0; i < N; i++) {
        if (t[i] > T) continue;
        if (c[i] < m || m < 0) {
            m = c[i];
        }
    }
    if (m == -1) {
        cout << "TLE" << endl;
    } else {
        cout << m << endl;
    }

    return 0;
}
