// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    const int MAX = 200000;
    int n;
    int a[MAX];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    int maxv = a[1] - a[0];
    int minv = a[0];
    for (int i = 1; i < n; i++) {
        maxv = max(maxv, a[i] - minv);
        minv = min(minv, a[i]);
    }
    cout << maxv << endl;
    return 0;
}
