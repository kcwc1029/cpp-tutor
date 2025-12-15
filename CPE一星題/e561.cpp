#include <iostream>
#include <vector>
using namespace std;

int bubble_sort(vector<int> &arr){
    int ans = 0;
    int n = arr.size();
    // 外層迴圈：迭代次數 (n-1)
    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < n - 1 - i; ++j){
            // 內層迴圈：比較和交換相鄰元素
            // 範圍：從 0 到 n - 1 - i
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                ans++;
            }
        }
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t){
        int n;
        cin >> n; // 車廂長度
        vector<int> train(n);
        for (int i = 0; i < n; i++) {
            cin >> train[i]; // 讀入車廂編號
        }
        cout << "Optimal train swapping takes " << bubble_sort(train) << " swaps." << endl;
        t--;
    }
    return 0;
}