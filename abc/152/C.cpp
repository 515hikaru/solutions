#include <iostream>
using namespace std;

/*
int max(int *a, int left, int right, int pos) {
    int mid = (left + right) / 2;
    if (pos > a[mid]) {
        
    }
}
*/


int main() {
    int n;
    const int SIZE = 2 * 100000;
    int P[SIZE];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> P[i];
    int c = 0;
    int max = P[0];
    for(int i = 0; i < n; i++) {
        bool flg = true;
        for(int j = 0; j < i; j++) {
            // cout << "i = " << i << ", j = " << j << endl;
            // cout << "P[i] = " << P[i] << ", P[j] = " << P[j] << endl;
            if(P[j] < P[i]) {
                flg = false;
                break;
            }
        }
        if(flg == false) continue;
        c++;
        // cout << "c = " << c << endl;
    }
    cout << c << endl;
    return 0;
}
