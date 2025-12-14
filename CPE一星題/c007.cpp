#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    bool is_start = true;
    // true：準備開始引號的狀態
    // false：準備結束引號的狀態
    while(getline(cin, s)){
        for(int i=0;i<s.size();i++){
            // 雙引號
            if(s[i] == '"'){
                if(is_start == true){
                    cout << "``";
                    is_start = false;
                }else{
                    cout << "''";
                    is_start = true;
                }
            // 原封不動印出來
            }else{
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}