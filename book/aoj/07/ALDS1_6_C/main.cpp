#include <iostream>
#include <string>
using namespace std;

const int N = 100000;
int n;

struct Card {
    string name;
    int number;
};


int partition(struct Card *A, int p, int r) {
    int x = A[r].number;
    int i, j;
    i = p - 1;
    struct Card tmp;
    for( j = p; j < r; j ++) {
        if(A[j].number <= x) {
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

void quickSort(struct Card *A, int left, int right) {
    if (left > right) return;
    int q = partition(A, left, right);
    // q の場所は既にソートが終わっているので
    // q より左、および q より右の場所に関するソートをする必要がある
    quickSort(A, left, q - 1);
    quickSort(A, q + 1, right);
}

int main() {
    cin >> n;
    struct Card A[N];
    for(int i = 0; i < n; i++) cin >> A[i].name >> A[i].number;
    quickSort(A, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << A[i].name << " " << A[i].number << endl;
    }
    return 0;
}
