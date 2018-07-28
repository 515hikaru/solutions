#include <iostream>
using namespace std;

int f(int a) {
    int sum = 0;
    string s = to_string(a);
    for(int j = 0; j < s.length(); j ++) {
        sum += s[j] - '0';
    }
    return sum;
}

int main()
{
    int n, a, b;
    int sum = 0;
    cin >> n >> a >> b;
    for(int i = 0; i < n + 1; i++) {
        int foo = f(i);
        if(foo >= a && foo <= b) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
