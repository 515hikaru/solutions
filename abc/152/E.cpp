#include <cstdio>
#include <iostream>
#include <vector>
#include <numeric>
#include <boost/integer/common_factor.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost::multiprecision::cpp_int;




const int MOD = 1000000007;

cpp_int gcd(cpp_int a, cpp_int b) {
    if (a < b) swap(a, b);
    return b == 0 ? a : gcd(b, a % b);
}

cpp_int lcm(cpp_int a, cpp_int b) {
    return a * b / gcd(a, b);
}

int main() {
    int n;
    const int SIZE = 10007;

    cpp_int A[SIZE];
    scanf("%d", &n);
    for (auto i = 0; i < n; i ++) {
        cin >> A[i];
    }
    cpp_int prod = lcm(A[0], A[1]);
    for(auto i = 2; i < n; i ++) prod = lcm(prod, cpp_int(A[i]));
    cpp_int sum = 0;
    for(auto i = 0; i < n; i++) {
        sum += (prod / A[i]);
        sum %=  MOD;
    }
    std::cout << sum << endl;
    return 0;
}
