// https://yukicoder.me/problems/361
#include <iostream>
using namespace std;

int main() {
    int k, n, f;
    int a[1000];
    cin >> k >> n >> f;
    for (int i = 0; i < f; i++) cin >> a[i];
    int mame = k * n;
    bool can = true;
    for (int i = 0; i < f; i++) {
        mame -= a[i];
        if (mame < 0) {
            can = false;
            break;
        }
    }
    if (can) {
        cout << mame << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
