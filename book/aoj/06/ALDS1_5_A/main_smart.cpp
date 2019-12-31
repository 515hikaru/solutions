#include <cstdio>

int n, A[50];

bool solve(int i, int m) {
    if (m == 0) return true;
    if (i >= n) return false;
    bool res = solve(i + 1, m) || solve(i + 1, m - A[i]);
    return res;
}

int main() {
    int q, key;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
        scanf("%d", &key);
        bool res = solve(0, key);
        if (res) printf("yes\n");
        else printf("no\n");
    }
}
