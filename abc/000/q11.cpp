#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ts(n);
    vector<int> xs(n);
    vector<int> ys(n);
    for (int i = 0; i < n; i++) {
        cin >> ts[i] >> xs[i] >> ys[i];
    }
    int initx = 0, inity = 0;
    bool can = true;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            initx = xs[i - 1];
            inity = xs[i - 1];
        }
        int dis = ts[i] - (abs(xs[i] - initx) + abs(ys[i] - inity));
        // cout << "dis = " << dis << endl;
        // cout << "ts[i] = " << ts[i] << endl;
        if (dis >= 0 && dis % 2 == 0) {
            continue;
        }
        can = false;
        break;
    }
    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
