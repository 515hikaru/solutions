#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    for (int i = 1; i <= n; i += 2) {
        int count = 0;
        for (int j = 1; j <= i; j += 2) {
            if (i % j == 0) count++;
        }
        if (count == 8) c++;
    }
    cout << c << endl;
    return 0;
}
