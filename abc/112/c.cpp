#include <iostream>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> x(N);
    std::vector<int> y(N);
    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> h[i];
    }
    int h_max = *max_element(h.begin(), h.end());
    return 0;
}
