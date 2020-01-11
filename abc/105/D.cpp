#include <iostream>
using namespace std;

int main() {
    int n;
    long m;
    cin >> n >> m;
    long a[100000];
    long s = 0;
    int count = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        s = 0;
        for (int j = i; j < n; j++) {
            s = (s + a[j]) % m;
            if (s == 0) count++;
        }
    }
    cout << count << endl;
    return 0;
}
