#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


// 正式解題
int main(){
    int n = 5;
    int arr[n] = {105,122,15,6,-9};
    // 由前到後輸出
    for(int i=0;i<n;i++){
        cout << arr[i] << endl;
    }
    // 由後到前輸出 4 3 2 1 0 
    for(int i=n-1;i>-1;i--){
        cout << arr[i] << endl;
    }
    return 0;
}

