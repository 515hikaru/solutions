#include <iostream>

using namespace std;
const int MAX = 10000;
const int QMAX = 500;

int main() {
    int n;
    cin >> n;
    int S[MAX];
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    int T[QMAX];
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    int count = 0;
    for (int i = 0; i < q; i++) {
        int c = T[i];
        for(int j = 0; j < n; j++) {
            if (S[j] == c) {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
}
