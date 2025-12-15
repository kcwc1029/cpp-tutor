#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

// 方向：N, E, S, W
int dx[] = {0, 1, 0, -1}; 
int dy[] = {1, 0, -1, 0};

// 方向：N, E, S, W 轉數值 0 1 2 3
map<char, int> d_char_to_d_int = {
    {'N', 0}, {'E', 1}, {'S', 2}, {'W', 3}
};

//  方向：數值 0 1 2 3轉N, E, S, W 
char int_to_char[] = {'N', 'E', 'S', 'W'};

// 整個矩陣
int matrix[55][55] = {0};

int main(){
    // 地圖的
    int max_row, max_col; 
    cin >> max_row >> max_col;
    // 機器人的基本資訊
    int row, col;
    char d_char;
    int d_int;
    string s ="";
    while(cin >> row >> col >> d_char >> s){
        // 是否調料
        bool lost = false; 
        // 把方向(char) -> int
        d_int = d_char_to_d_int[d_char];
        for(int i=0;i<s.size();i++){
            // 前進
            if(s[i] == 'F'){
                // 下一步的位置
                int new_row = row + dx[d_int];
                int new_col = col + dy[d_int];
                // 判斷邊界
                if(new_row>=0 && new_row<=max_row && new_col>=0 && new_col<=max_col){
                    // 踩下去
                    row = new_row;
                    col = new_col;
                }
                // 超出邊界
                else{
                    // 前人有沒有掉下去
                    // 如果有掉下去過
                    if(matrix[row][col] == 1){
                        continue;
                    }else{ // 第一次要掉下去
                        cout << row << " " << col << " " << int_to_char[d_int] << " LOST" << endl;
                        lost = true;
                        matrix[row][col] = 1;
                        break;
                    }
                }
            }
            // 右轉
            else if(s[i] == 'R'){
                d_int = (d_int + 1)%4;
            }
            // 左轉
            else if(s[i] == 'L'){
                d_int = (d_int - 1 + 4)%4;
            }
        }
        // 不走執行完了，人還安全
        if(lost == false){
            cout << row << " " << col << " " << int_to_char[d_int] << endl;
        }
    }
    return 0;
}