#include <stdio.h>
#include <stdbool.h>


// 一維陣列中尋找特定值
// 如果找到，返回【他是第幾個】
// 沒找到，返回-1
int main(){
    int score[5] = {87, 66, 90, 65, 70}; 
    int key = 90; // 我要尋找的目標
    bool flag = true; 
    for(int i=0;i<5;i++){
        // key
        // score[i]
        if(key == score[i]){
            printf("%d", i);
            flag = false;
            break;
        }
    }
    // 檢查flag是否還是為true
    // 如果為true，代表還沒有找到東西
    // 如果為false，代表說已經找到了
    if(flag == true){
        printf("%d", -1);
    }
}

// 資料型太
// int 整數
// 浮點 float
// 字元 char
// 字串 string 
// 布林直 對1/錯0 bool
