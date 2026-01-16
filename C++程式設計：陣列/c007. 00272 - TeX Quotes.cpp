#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main(){
    string s;
    bool flag = true;
    while(getline(cin, s)){
        // 有一個句子在這邊
        int n = s.length();
        // true：準備吃第一個雙引號
        // false：準備吃第二個雙引號
        for(int i=0;i<n;i++){
            // 如果吃到雙引號
            if(s[i] == '"'){
                if(flag == true){
                    cout << "``";
                    flag = false;
                }else{
                    cout << "''";
                    flag = true;
                }
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }
}