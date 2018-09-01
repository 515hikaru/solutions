#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int count = 0;
    for (int a = 1; a < N + 1; a++) {
        for (int b = 1; b < N + 1; b++) {
            for (int c = 1; c < N + 1; c++) {
                int aa = a + b;
                int bb = c + b;
                int cc = c + a;
                if (aa % K == 0 && bb % K == 0 && cc % K == 0) {
                    cout << "a = " << a << " b = " << b << " c = " << c << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}
