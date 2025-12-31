#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// 前提是fib 0---我不知道 -> 動態陣列
// 一呼叫這個函數，那他就要幫我產生這個陣列，並且把這個鄭烈回傳到主程式
vector<int> f(){
    vector<int> fib;
    fib.push_back(1);
    fib.push_back(2);
    while(fib.back()<100000000){
        int temp = fib[fib.size()-1] + fib[fib.size()-2];
        fib.push_back(temp);
    }
    return fib;
}



// 正式解題
int main(){
    vector<int> fib = f(); // 取費事數列
    // for(int i=0;i<fib.size();i++){
    //     cout << fib[i] << " ";
    // }
    int t; // 測試資料的筆數
    cin >> t;
    while(t--){
        int n; //要轉換進位置的數
        cin >> n;
        int n_copy = n;
        string ans = "";
        bool start_print = false; //用來控制是否開始列印 (去除前導零)
        // 費事數列的陣列
        // for(int i=n-1;i>-1;i--){
        for(int i=fib.size()-1;i>-1;i--){
            // 第一種
            if(fib[i]>n and start_print == false){
                // 啥都不輸出
                continue;
            }
            // 第二種
            else if(fib[i]>n and start_print == true){
                // 給出0
                ans += "0";
            }
            // 第三種
            else if(fib[i]<=n){
                // 輸出1
                ans += "1";
                start_print = true;
                n -= fib[i];
            }
        }
        cout << n_copy << " = " << ans << " (fib)" << endl;
    }
    return 0;
}

