#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    sort(ar. begin(), ar.begin()+n);
    int alice = 0, bob = 0;
    int c = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(c % 2 == 0) {
            alice += ar[i];
        } else {
            bob += ar[i];
        }
        c++;
    }
    cout << alice - bob << endl;
    return 0;
}
