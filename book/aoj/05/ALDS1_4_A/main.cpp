#include <iostream>

using namespace std;
const int MAX = 10001;
const int QMAX = 501;

bool search(int *a, int n, int key) {
    int i = 0;
    a[n] = key;
    while( a[i] != key) i++;
    return i != n;
}

int main() {
    int n;
    cin >> n;
    int S[MAX];
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    int T[QMAX];
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    int count = 0;
    for (int i = 0; i < q; i++) {
        int c = T[i];
        if (search(S, n, c)) count++;
    }
    cout << count << endl;
}
