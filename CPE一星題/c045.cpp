#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<string> lines;
    string s;
    int max_col = 0, max_row = 0;
    while (getline(cin, s)){
        // 更新最大長度(s.length()回傳型態是unsigned long，這邊要強制加一下(int))
        max_col = max(max_col, (int)s.length());
        lines.push_back(s);
    }
    ///// 輸出 /////
    max_row = lines.size();
    for (int i = 0; i < max_col; i++){
        // 內層迴圈一樣從最後一行倒著數回來
        for (int j = max_row - 1; j >= 0; j--) {
            if (i < lines[j].length()){
                cout << lines[j][i];
            }else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}