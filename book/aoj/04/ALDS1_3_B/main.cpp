#include <iostream>


void solve(std::string* names, int* times, int length, int q) {
    bool everyZero = false;
    int totalTime = 0;
    while (!everyZero) {
        everyZero = true;
        for ( int i = 0 ; i < length ; i++) {
            if (times[i] == 0) {
                continue;
            } else if (times[i] <= q) {
                totalTime += times[i];
                times[i] = 0;
                std::cout << names[i] << " " << totalTime << std::endl;
                everyZero = false;
            }  else {
                times[i] -= q;
                totalTime += q;
                everyZero = false;
            }
        }
    }
}

int main() {
    const int N = 100000;
    int length, q;
    std::string names[N];
    int times[N];
    std::cin >> length >> q;
    for (int i = 0; i < length ; i++) {
        std::cin >> names[i] >>  times[i];
    }
    solve(names, times, length, q);
    return 0;
}

