#include <iostream>

using namespace std;

int main() {
    const int max = 200000;
    const int maxq = 100000;
    int n, m, Q;
    int l[max], r[max];
    int p[maxq], q[maxq], ans[maxq];
    cin >> n >> m >> Q;
    for (int i = 0; i < m; i++) cin >> l[i] >> r[i];
    for (int i = 0; i < Q; i++) cin >> p[i] >> q[i];
    for (int i = 0; i < Q; i++) {
        int left = p[i];
        int right = q[i];
        int c = 0;
        for (int j = 0; j < m; j++) {
            if (left <= l[j] && r[j] <= right) c++;
        }
        ans[i] = c;
    }
    for (int i = 0; i < Q; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
