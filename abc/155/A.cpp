#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool flg = false;
    cin >> a >> b >> c;
    if (a == b) {
        if (a != c) flg = true;
    } else if (b == c) {
        if (a != b) flg = true;
    } else if (a == c) {
        if (a != b) flg = true;
    }
    if (flg) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
