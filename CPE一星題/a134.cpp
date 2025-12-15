#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> f(){
    vector<int> fib;
    fib.push_back(1); // F[0]
    fib.push_back(2); // F[1]
    // 產生後面的數字，直到超過題目範圍 (題目通常給 100,000,000 左右)
    // F[i] = F[i-1] + F[i-2]
    while (fib.back() < 100000000) {
        int next_val = fib[fib.size() - 1] + fib[fib.size() - 2];
        fib.push_back(next_val);
    }
    return fib;
}

int main(){
    vector<int> fib = f();
    int t; // 測試資料的筆數
    cin >> t;
    while(t--){
        int n, n_copy;
        cin >> n;
        n_copy = n;
        bool start_print = false; //用來控制是否開始列印 (去除前導零)
        string ans = "";
        for (int i = fib.size() - 1; i >= 0; i--){
            if(fib[i]>n && start_print == false){
                continue;
            }else if(fib[i]>n && start_print == true){
                ans+="0";
            }else if(fib[i]<=n){
                ans+="1";
                n-=fib[i];
                start_print = true;
            }
        }
        cout << n_copy << " = " << ans << " (fib)" << endl;
    }
    return 0;
}