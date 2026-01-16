#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    // 處理多組測資，直到 EOF
    while (cin >> s) {
        // 統計 26 個英文字母的出現頻率
        vector<int> counts(26, 0);
        
        for (char c : s) {
            if (isalpha(c)) {
                // 不分大小寫，統一轉為小寫後計算索引 (0-25)
                counts[tolower(c) - 'a']++;
            }
        }
        
        // 統計出現次數為「奇數」的字母個數
        int odd_count = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] % 2 != 0) {
                odd_count++;
            }
        }
        
        // 判定：奇數次數的字母最多只能有一個
        if (odd_count <= 1) {
            cout << "yes !" << endl;
        } else {
            cout << "no..." << endl;
        }
    }
    return 0;
}