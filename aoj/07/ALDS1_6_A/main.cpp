#include <cstdio>
#include <cstdlib>

#define N 2000001
#define V 10001

void printArray(unsigned short *A, int n) {
    for(int i = 0; i < n; i++) {
        if(i) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    unsigned short *A, *B;
    unsigned short C[V];
    int max = 0;
    A = (unsigned short *)malloc(sizeof(short) * n + 1);
    B = (unsigned short *)malloc(sizeof(short) * n + 1);
    for(int i = 0; i < n; i++) {
        scanf("%hu", &A[i]);
        if (A[i] > max) max = A[i];
    }
    for(int i = 0; i < n; i ++) {
        C[ A[i] ]++;
    }
    for(int i = 1; i <= max; i ++) {
        C[i] += C[i-1];
    }
    for(int i = n - 1; i >= 0; i--) {
        B[ C[A[i]] - 1]  = A[i];
        C[ A[i] ]--;
    }

    printArray(B, n);
    return 0;
}
