#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    // 讀取一行字串
    while (cin >> s) {
        bool isPalindrome = true;
        int n = s.length();
        
        // 只需要比對到字串的一半即可
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}