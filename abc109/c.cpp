#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

int gcdl(vector<int> d) {
    if (d.size() == 2) {
        return gcd(d[0], d[1]);
    }
    int f = d[d.size() - 1];
    d.pop_back();
    int s = d[d.size() - 1];
    d.pop_back();
    int m = gcd(f, s);
    d.push_back(m);
    return gcdl(d);
}

int main() {
    int n, x;
    vector<int> a(n + 1);
    vector<int> d(n);
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = x;
    sort(a.begin(), a.begin() + (n + 1));
    for (int i = 0; i < n; i++) {
        d[i] = a[i + 1] - a[i];
    }
    for (int i = 0; i < n + 1; i++) {
        cout << d[i] << endl;
    }
    int max_ = 0;
    d.erase(unique(d.begin(), d.end()), d.end());
    if (d.size() == 1) {
        cout << d[0] << endl;
        return 0;
    }
    int m = gcdl(d);
    cout << m << endl;
    return 0;
}
