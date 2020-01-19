#include <iostream>
#include <iostream>
using namespace std;


int main() {
    int n;
    const int SIZE = 2 * 100000;
    int P[SIZE];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> P[i];
    int c = 1;
    int min = P[0];
    for (int i = 1; i < n ; i ++) {
        if (P[i] < min) {
            min = P[i];
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
