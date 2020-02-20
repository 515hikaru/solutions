#include <iostream>
using namespace std;

const int NMAX = 20;
const int MMAX = 200;

int combination(int *xs, int *A, int n, int i, int key) {
    if (i == n) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if (xs[j] == 1) {
                sum += A[j];
            }
        }
        if (sum == key) {
            return 1;
        } else {
            return 0;
        }
    }
    xs[i] = 0;
    int val;
    val = combination(xs, A, n, i+1, key);
    if (val == 1) {
        return val;
    }
    xs[i] = 1;
    val = combination(xs, A, n, i+1, key);
    if (val == 1) {
        return val;
    }
    return 0;
}

int main() {
    int n, q, m;
    int A[NMAX], xs[NMAX];
    cin >> n;
    for (int i = 0; i < n; i++)  {
        cin >> A[i];
        xs[i] = 0;
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> m;
        if (combination(xs, A, n, 0, m) == 1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
