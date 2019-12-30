// Binary Search

#include <iostream>

using namespace std;

const int SIZE = 100000;
const int QSIZE = 50000;

bool binarySearch(int *a, int key, int n) {
    int left = 0;
    int right = n;
    int mid;

    while (left < right) {
        mid = (left + right) / 2;
        if (a[mid] == key) return true;
        if (key < a[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return false;
}

int main () {
    int n;
    cin >> n;
    int S[SIZE];
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;
    int T[QSIZE];
    for (int i = 0; i < q; i++) {
        cin >> T[i];
    }
    int count = 0;
    for(int i = 0; i < q; i++) {
        int c = T[i];
        if(binarySearch(S, c, n)) count++;
    }
    cout << count << endl;
}
