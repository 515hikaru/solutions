#include <iostream>
#include <cstdio>
using namespace std;

long long d(long long n) {
    long long res = 0;
    while (n) {
        res++;
        n = n/10;
    }
    return res;
}

int main() {
    long long a,b, x, ans;
    cin >> a >> b >> x;
    long long left = 0;
    long long right = 1000000001;
    while (right - left > 1) {
        long long mid = (left + right) / 2;
        long long price = a * mid + b * d(mid);
        if (price > x) right = mid;
        else left = mid;
    }
    cout << left << endl;

}
