#include <iostream>
#include <cmath>    // for abs()
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < 7; i++) {
        int prev = s[i - 1] - 'A'; // 把字母轉成順序值
        int curr = s[i] - 'A';
        cout << abs(curr - prev);
    }

    cout << endl;
    return 0;
}