#include <iostream>
using namespace std;

#define SIZE 100;

int main() {
    int N;
    cin >> N;
    int a;
    bool flg = true;
    for(int i = 0 ; i < N ; ++i) {
        cin >> a;
        if (a % 2 == 0) {
            if (a % 3 != 0 && a % 5 !=0) {
                flg = false;
                break;
            }
        }
    }
    if (flg) {
        cout << "APPROVED" << endl;
    } else {
        cout << "DENIED" << endl;
    }
    return 0;
}
