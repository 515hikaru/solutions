#include <iostream>

using namespace std;

int main() {
    int x1, x2, y1, y2;
    int x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    int delta_x, delta_y;
    delta_x = x2 - x1;
    delta_y = y2 - y1;
    x3 = x2 - delta_y;
    y3 = y2 + delta_x;
    x4 = x3 - delta_x;
    y4 = y3 - delta_y;
    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}
