// Coins

#include <iostream>
using namespace std;

int main()
{
    int a500, a100, a50;
    int sum;
    cin >> a500 >> a100 >> a50 >> sum;
    int c = 0;
    for(int i = 0; i < a500 + 1; i++) {
        for(int j = 0; j < a100 + 1; j ++) {
            for(int k = 0; k < a50 + 1; k ++) {
                if(500 * i + 100 * j + 50 * k == sum) c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}
