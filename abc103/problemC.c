#include <stdio.h>

int main() {
    long N;
    long sum = 0;
    long a[3000];
    scanf("%ld\n", &N);
    for(int i = 0; i < N; i++) {
        scanf("%ld", &a[i]);
    }
    for(int i = 0; i < N ; i++) {
        sum += a[i] - 1;
    }
    printf("%ld\n", sum);
    return 0;
}
