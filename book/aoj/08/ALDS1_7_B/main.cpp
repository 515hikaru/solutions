#include <iostream>

using namespace std;

const int NIL = -1;

struct Node {
    int parent, left, right;
};

int n;
int D[50], H[50];
Node nodes[50];

int getSibling(int id, Node node) {
    if (node.parent == -1) return NIL;
    Node parent = nodes[node.parent];
    int left = parent.left; 
    int right = parent.right;
    return left == id ? right : left;
}

int getDegree(Node node) {
    int c = 0;
    if(node.right != -1) c++;
    if(node.left != -1) c++;
    return c;
}

void getDepth(int i, int depth) {
    D[i] = depth;
    if (nodes[i].left != NIL) getDepth(nodes[i].left, depth+ 1);
    if (nodes[i].right != NIL) getDepth(nodes[i].right, depth+ 1);
}

int getHeight(int i) {
    int h1 = 0, h2 = 0;
    if (nodes[i].left != NIL) h1 = getHeight(nodes[i].left) + 1;
    if (nodes[i].right != NIL) h2 = getHeight(nodes[i].right) + 1;
    return H[i] = (h1 > h2 ? h1 : h2);
}


void printNode(int id, Node node) {
    cout << "node " << id << ": ";
    cout << "parent = " << node.parent << ", ";
    cout << "sibling = " << getSibling(id, node) << ", ";
    int deg = getDegree(node);
    cout << "degree = " << deg << ", ";

    cout << "depth = " << D[id] << ", ";
    cout << "height = " << H[id] << ", ";
    if (node.parent == -1) cout << "root";
    else if (deg > 0) cout << "internal node";
    else cout << "leaf";
    cout << endl;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        nodes[i].parent = nodes[i].left = nodes[i].right = NIL;
    }
    for(int i = 0; i < n; i++) {
        int num, left, right;
        cin >> num >> left >> right;
        nodes[num].left  = left;
        nodes[num].right = right;
        nodes[left].parent = num;
        nodes[right].parent = num;
    }
    int j = 0;
    while (nodes[j].parent != NIL) {
        j++;
    }
    getDepth(j, 0);
    getHeight(j);
    for(int i = 0;i < n; i++) {
        printNode(i, nodes[i]);
    }

    return 0;
}
