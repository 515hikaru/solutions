#include <stdio.h>

void so(int *a, int n) {
    int tmp;
    for(int i = 0; i < n -1 ; i ++) {
        for(int j = n -1; j > i; j --) {
            if(a[j] < a[j - 1]) {
                tmp = a[j-1];
                a[j - 1] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    int a[100];
    int alice = 0, bob = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    so(a, n);
    int c = 0;
    for(int i = n - 1; i >= 0; i--) {
        if(c % 2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
        c++;
    }
    printf("%d\n", alice - bob);
    return 0;
}
