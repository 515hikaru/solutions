#include <iostream>

using namespace std;

struct Node {
    int parent, left, right;
};

int getSibling(int id, Node node, Node* nodes) {
    if (node.parent == -1) return -1;
    Node parent = nodes[node.parent];
    int left = parent.left; 
    int right = parent.right;
    return left == id ? left : right;
}

int getDegree(Node node) {
    int c = 0;
    if(node.right != -1) c++;
    if(node.left != -1) c++;
    return c;
}

int getDepth(int id, Node node, Node* nodes) {

}

int getHeight(Node node) {
    
}


void printNode(int id, Node node, Node* nodes) {
    cout << "node " << id << ": ";
    cout << "parent = " << node.parent << ", ";
    cout << "sibling = " << getSibling(id, node, nodes) << ", ";
    cout << "degree = " << getDegree(node) << ", ";

}

int main() {
    int n;
    cin >> n;
    Node ns[50];
    for(int i = 0; i < n; i++) {
        ns[i].parent = ns[i].left = ns[i].right = -1;
    }
    for(int i = 0; i < n; i++) {
        int num, left, right;
        cin >> num >> left >> right;
        Node tmp;
        tmp.left = left;
        tmp.right = right;
        ns[num] = tmp;
        ns[left].parent = num;
        ns[right].parent = num;
    }
    return 0;
}
