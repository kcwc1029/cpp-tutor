#include <iostream>
#include <bits/stdc++.h>

using namespace std;

using namespace std;

// 字母轉換表：依照 A-Z 順序存入轉換後的兩位數字
int convert_table[] = {
    10, 11, 12, 13, 14, 15, 16, 17, 34, 18, // A-J
    19, 20, 21, 22, 35, 23, 24, 25, 26, 27, // K-T
    28, 29, 32, 30, 31, 33                  // U-Z
};

int main() {
    string input;
    while (cin >> input) {
        // 1. 計算後 8 位數字與最後一位檢查碼的加權和
        int s_rear = 0;
        int weight = 8;
        for (int i = 0; i < 8; ++i) {
            s_rear += (input[i] - '0') * weight;
            weight--;
        }
        // 加上最後一位檢查碼 (權重為 1)
        s_rear += (input[8] - '0');

        // 2. 窮舉 26 個字母，檢查是否符合校驗公式
        for (int i = 0; i < 26; ++i) {
            int x = convert_table[i];
            int x1 = x / 10;
            int x2 = x % 10;
            
            // 計算完整的加權總和
            int total_sum = (x1 * 1 + x2 * 9) + s_rear;
            
            // 檢查是否符合整除 10 的規則
            if (total_sum % 10 == 0) {
                cout << (char)('A' + i);
            }
        }
        cout << endl;
    }
    return 0;
}