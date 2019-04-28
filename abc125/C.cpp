#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
  if (a < b) {
    swap(a, b);
  }
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;
  vector<int> as(N);
  for (int i = 0; i < N; i++) {
    cin >> as[i];
  }
  vector<int> left(N);
  vector<int> right(N);
  left[0] = 0;
  right[N - 1] = 0;
  for (int i = 1; i < N; i++) {
    left[i] = gcd(left[i - 1], as[i - 1]);
    right[N - 1 - i] = gcd(right[N - i], as[N - i]);
  }
  int m = 1;
  int mm;
  for (int i = 0; i < N; i++) {
    mm = gcd(left[i], right[i]);
    if (mm > m) {
      m = mm;
    }
  }
  cout << m << endl;
  return 0;
}
