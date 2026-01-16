#include <iostream>
#include <vector>

using namespace std;

vector<int> get_abs(vector<int> arr){
    vector<int> abs_arr;
    int n = arr.size();
    for(int i=1;i<n;i++){
        abs_arr.push_back(abs(arr[i]-arr[i-1]));
    }
    return abs_arr;
}

bool judge(vector<int> arr, int n){
    // 使用一個標記陣列來記錄 1 ~ n-1 哪些出現過
    vector<bool> check(n, false);
    int count = 0;
    for(auto p:arr){
        if(p>=1 && p<=n && check[p]==false){
            count++;
            check[p] = true;
        }
        else return false;
    }
    return true;
}

int main(){
    int n;
    while(cin>>n){
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // 做絕對值陣列
        vector<int> abs_arr = get_abs(nums);
        bool flag = judge(abs_arr, n);
        if(flag) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
    return 0;
}