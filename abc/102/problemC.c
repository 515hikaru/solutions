// https://beta.atcoder.jp/contests/abc102/tasks/arc100_a
//
#include <stdio.h>
#include <stdlib.h>

#define NUM 200000

long absl(long a) {
    return a >= 0 ? a : - a;
}

void print_array(long *a, long size) {
    for(int i = 0; i < size; i++) {
        printf("%ld\n", a[i]);
    }
}

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}


long median(long *a, long size) {
    long idx, idx2;
    qsort(a, size, sizeof(long), compare_int);
    if(size % 2 == 1) return a[size / 2];
    idx = size / 2;
    idx2 = (size / 2) - 1;
    return (a[idx] + a[idx2]) / 2;
}

int main() {
    long N;
    long m;
    long sum = 0;
    long a[NUM];
    char s[NUM];
    scanf("%ld\n", &N);
    for(int i = 0; i < N; i++) {
        scanf("%ld", &a[i]);
    }
    for(int i = 0; i < N; i++) {
        a[i] = a[i] - (i + 1);
    }
    m = median(a, N);
    for(int i = 0; i < N; i ++) {
        sum += absl(a[i] - m);
        a[i] = absl(a[i] - m);
    }
    printf("%ld\n", sum);
    return 0;
}
