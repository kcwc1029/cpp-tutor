#include <iostream>
using namespace std;

// 取得次數
int get_cycle_length(int n){
    int length = 1;
    while(n!=1){
        length++;
        if(n%2==0){
            n = n / 2;
        }else{
            n = 3 * n + 1;
        }
    }
    return length;
}

int main(){
    int i, j;
    // 輸入直到ij (重複一直輸入)
    while(cin >> i >> j){
        // 紀錄最大cycle length
        int ans = 0;
        // 題目他不確定i j
        int head = min(i, j); 
        int tail = max(i, j);
        // 跑頭跟尾，計算它的cycle length
        for(int k=head;k<=tail;k++){
            int temp = get_cycle_length(k);
            if(temp>ans) ans = temp;
        }
        // 最後的輸出
        cout << i << " " << j << " " << ans << endl;
    }
    return 0;
}