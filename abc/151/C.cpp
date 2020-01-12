#include <cstdio>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int num;
    int ac = 0, wa = 0;
    char ans[10];

    int WA[100007];
    bool AC[100007];
    for(int i = 1; i <= n; i++) {
        AC[i] = 0;
        WA[i] = 0;
    }
    for(int i = 0 ; i < m ; i++){
        scanf("%d", &num);
        scanf("%s", ans);
        if (AC[num]) {
            continue;
        }
        if (ans[0] == 'A') {
            AC[num] = true;
        } else { // if (ans[0] == 'W'){
            WA[num] += 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(AC[i]) {
            ac++;
            wa += WA[i];
        }
    }
    printf("%d %d\n", ac, wa);
}
