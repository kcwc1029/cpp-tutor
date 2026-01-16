#include <iostream>

/**
 * 題目：e189. 3的倍數 - 面試題
 * 限制：不得使用 / 與 %
 * 思路：利用二進位下奇偶位差值判定
 */

using namespace std;

// 判斷是否為 3 的倍數的函式
bool is_multiple_of_3(int n) {
    // 處理絕對值
    if (n < 0) n = -n;
    // 基礎案例：0 是 3 的倍數，1 與 2 不是
    if (n == 0) return true;
    if (n == 1 || n == 2) return false;

    int odd_count = 0;
    int even_count = 0;

    // 計算二進位中奇數位置與偶數位置的 1 的個數
    while (n > 0) {
        if (n & 1) odd_count++; // 檢查最後一位（奇數位）
        n >>= 1;                // 右移一位
        
        if (n & 1) even_count++; // 檢查現在的最後一位（偶數位）
        n >>= 1;                // 右移一位
    }

    // 遞迴呼叫，縮小數字規模
    return is_multiple_of_3(abs(odd_count - even_count));
}

int main() {
    // 快速 I/O
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n) {
        if (is_multiple_of_3(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}