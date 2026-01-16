#include <iostream>
#include <vector>
#include <algorithm>

/**
 * 本程式解決 d550 物件排序問題。
 * 時間複雜度：O(M * N log N)，其中 N log N 為排序次數，M 為每次比較所需的維度。
 * 空間複雜度：O(N * M)，用於存儲所有整數。
 */

using namespace std;

int main() {
    // 提升 I/O 效率
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    if (!(cin >> N >> M)) return 0;

    // 使用 vector 的 vector 儲存矩陣資料
    // data[N][M]
    vector<vector<int>> matrix(N, vector<int>(M));

    // 讀取資料
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    // std::sort 對於 vector<T> 預設即為字典序排序 (Lexicographical order)
    // 它會依序比較元素 0, 1, ..., M-1
    sort(matrix.begin(), matrix.end());

    // 輸出結果
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j] << (j == M - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}