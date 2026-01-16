#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // 處理多組測資
    while (cin >> n) {
        int temp;
        // 雖然我們知道結果，但仍須將輸入緩衝區中的 n 個數字讀完
        for (int i = 0; i < n; ++i) {
            cin >> temp;
        }

        // 根據數學推論，直接輸出 1 到 n
        for (int i = 1; i <= n; ++i) {
            cout << i << (i == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}