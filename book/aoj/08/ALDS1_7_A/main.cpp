#include <iostream>
using namespace std;

/* 各ノードを
 * * 親
 * * 一番左の子
 * * 右の兄弟
 * の3つの要素だけで表せる
 */

#define MAX 100005
#define NIL (-1)

struct Node {int p, l, r;};

Node T[MAX];
int n, D[MAX];

void print(int u) {
    int i, c;
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "depth = " << D[u] << ", ";
    if (T[u].p == NIL) cout << "root, ";
    else if (T[u].l == NIL) cout << "leaf, ";
    else cout << "internal node, ";
    cout << "[";
    for ( i = 0,  c = T[u].l; c != NIL; i++, c = T[c].r ) {
        if (i) cout << ", ";
        cout << c;
    }
    cout << "]" << endl;
}

void rec(int u, int p) {
    D[u] = p;
    if (T[u].r != NIL) rec(T[u].r, p);
    if (T[u].l != NIL) rec(T[u].l, p + 1);
}

int main() {
    int i, j, d, v, c, l, r;
    cin >> n;
    // initialize
    for(i = 0; i < n; i++) {
        T[i].p = T[i].l = T[i].r = NIL;
    }
    for (i = 0 ; i < n; i++) {
        cin >> v >> d;
        for(j = 0; j < d; j++) {
            cin >> c;
            // j = 0 のときは、親の一番左の子として登録
            // j >= 1 のときは親から見た左の子にとっての右の兄弟として登録
            if ( j == 0 ) T[v].l = c;
            else T[l].r = c;
            l = c;  // ここで子の位置を覚えておく
            T[c].p = v;  // 子に親を登録
        }
    }
    for (i = 0; i < n; i++) {
        if (T[i].p == NIL) r = i;
    }
    rec(r, 0);
    for (int i = 0; i < n; i++) print(i);
    return 0;
}
