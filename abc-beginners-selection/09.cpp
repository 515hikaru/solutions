#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    const int yukichi = 10000;
    const int ichiyo = 5000;
    const int hideyo = 1000;
    int sum, z, zz;
    for (int i = x; i >= 0; i--) {
        z = x - i;
        for (int j = z; j >= 0; j--) {
            zz = z - j;
            sum = yukichi * i + ichiyo * j + hideyo * zz;
            if (sum == y) {
                cout << i << " " << j << " " << zz << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
    return 0;
}
