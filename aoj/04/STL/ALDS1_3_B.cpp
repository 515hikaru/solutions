#include <iostream>
#include <queue>
#include <string>

using namespace std;

typedef struct pp{
    string name;
    int t;
} P;

int main() {
    int n, q, i, t;
    string name;
    queue<P> Q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        P p;
        cin >> p.name >> p.t;
        Q.push(p);
    }
    int elaps = 0;
    while (!Q.empty()) {
        P a = Q.front(); Q.pop();
        t = min(a.t, q);
        elaps += t;
        a.t -= t;
        if (a.t == 0) {
            std::cout << a.name <<  " " << elaps << endl;
        } else {
            Q.push(a);
        }
    }
}
