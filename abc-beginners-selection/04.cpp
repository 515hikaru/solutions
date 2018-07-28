#include <iostream>
using namespace std;

bool chkAllEven(int *a, int size) {
    for(int i = 0; i<size; i++) {
        if(a[i] % 2 == 1) { 
            return false;
        }
        a[i] /= 2;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int a[200];
    for(int i = 0; i < n; i++) cin >> a[i];
    int c = 0;
    while(chkAllEven(a, n)) {
        c++;
    }
    cout << c << endl;
    return 0;
}
