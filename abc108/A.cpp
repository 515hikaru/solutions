#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K;
    if (K % 2 == 0) {
        int harf = K / 2;
        cout << harf * harf << endl;
    } else {
        int harf = K / 2;
        cout << harf * (harf + 1) << endl;
    }
    return 0;
}
