#include <iostream>
using namespace std;


int main(){
    int i, j;
    while (cin >> i >> j){
        int ans = 0; // 最長的cycle length
        // 狀況1：題目給的ij並不會排序，在計算cycle length要排序，但最後輸出順序是得按照排序前狀態
        // 解法：多兩個變數head與tail
        int head = min(i, j);
        int tail = max(i, j);
        for(int k=head;k<=tail;k++){
            int temp = getCycleLength(k);
            if(temp>ans){
                ans = temp;
            }
        }
        cout << i << " " << j << " " << ans << endl;
    }
    return 0;
}