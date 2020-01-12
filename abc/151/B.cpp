#include <iostream>

using namespace std;

int main() {
    int n, m, k;
    int sum = 0;
    int tmp;
    cin >> n >> k >> m;
    for(int i = 0; i < n - 1; i++) {
        cin >> tmp;
        sum += tmp;
    }
    int need = m * n - sum;
    if (need > k) {
        cout << -1 << endl;
    } else if(need < 0) {
        cout << 0 << endl;
    } 
    else {
        cout << need << endl;
    }


}
