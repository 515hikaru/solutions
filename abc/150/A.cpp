#include <iostream>

using namespace std;

int main() {
    int k, x;
    cin >> k >> x;
    int total = k * 500;
    if(total >= x) cout << "Yes" << endl;
    else cout << "No" << endl;    
}