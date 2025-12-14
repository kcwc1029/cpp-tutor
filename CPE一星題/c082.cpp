#include <iostream>
#include <map>
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
    int max_row, max_col; // 地圖右上角座標
    int row, col; // 機器人一開始座標
    char d_char; // 一開始方向(N E S W)
    int d_int; // 一開始方向(0 1 2 3)
    string s = ""; // 移動路徑
    cin >> max_row >> max_col;
    while(cin>>row>>col>>d_char>>s){
        d_int = d_char_to_d_int[d_char];
        bool lost = false; // 是否掉落
        for (int i = 0; i < s.size(); i++){
            // forward
            if (s[i] == 'F'){
                int new_row = row + dx[d_int];
                int new_col = col + dy[d_int];
                // 檢查新邊界
                if(new_row>=0 && new_row<=max_row && new_col>=0 && new_col<=max_col){
                    row = new_row;
                    col = new_col;
                }else{ // 超出邊界
                    // 檢查前人有沒有掉落
                    if(matrix[row][col] == 1){
                        continue;
                    }else{
                        cout << row << " " << col << " " << int_to_char[d_int] << " LOST" << endl;
                        lost = true;
                        matrix[row][col] = 1;
                        break;
                    }
                    
                }
            } // 右轉
            else if(s[i] == 'R'){
                d_int = (d_int+1)%4;
                
            } // 左轉
            else{
                d_int = (d_int - 1 + 4) % 4;
            }
        }
        if(lost == false){
            cout << row << " " << col << " " << int_to_char[d_int] << endl;
        }
    }
    bool lost = false;

    return 0;
}