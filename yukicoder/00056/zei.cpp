// yukicoder.me/problems/111

#include <iostream>
using namespace std;

int main() {
    int d, p;
    cin >> d >> p;
    double a = p / 100.0;
    cout << int(d + d * a) << endl;
    return 0;
}
