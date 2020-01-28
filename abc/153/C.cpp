#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 200007;

int main() {
    int N, K;
    cin >> N >> K;
    vector<long> H(N);
    for(auto i = 0; i < N; i++) cin >> H[i];
    sort(H.begin(), H.end());
    long sum = 0;
    for(auto i = 0; i < N - K; i++) {
        sum += H[i];
    }
    cout << sum << endl;
    return 0;
}
