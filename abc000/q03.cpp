#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '1') sum += 1;
    }
    cout << sum << endl;
    return 0;
}
