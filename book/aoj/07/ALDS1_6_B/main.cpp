#include <iostream>

using namespace std;

const int SIZE = 100000;
int n;

int partition(int *A, int p, int r) {
    int x = A[r];
    int i, j;
    i = p - 1;
    int tmp;
    for( j = p; j < r; j ++) {
        if(A[j] <= x) {
            i++;
            tmp = A[j];
            A[j] = A[i];
            A[i] = tmp;
        }
    }
    tmp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = tmp;
    return i + 1;
}

int main () {
    cin >> n;
    int A[SIZE];
    for(int i = 0; i < n; i++) cin >> A[i];
    int q = partition(A, 0, n - 1);
    for(int i = 0; i < n; i++) {
        if (i != 0) cout << " ";
        if (i == q) cout << "[";
        cout << A[i] ;
        if (i == q) cout << "]";
    }
    cout << endl;

}
