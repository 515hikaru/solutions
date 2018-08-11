#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 0) {
        cout << "0" << endl;
        return 0;
    }
    int absN;
    if (N > 0) {
        absN = N;
    } else {
        absN = -N;
    }
    int count = absN / 2;
    for (int i = 0; i < count; i++) {
    }
}
