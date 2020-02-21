#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <functional>
#include <map>
#include <set>
#include <tuple>
#include <bitset>

using namespace std;
int main() {
    int N;
    cin >> N;
    int ans = 0;
    for (auto i = 3; i <= N; i+=2) {
        int c = 0;
        for(auto j = 1; j <= N; j+=2) {
            if (i % j == 0) {
                ++c;
            }
        }
        if (c == 8) ans++;
    }
    cout << ans << endl;
    return 0;
}
