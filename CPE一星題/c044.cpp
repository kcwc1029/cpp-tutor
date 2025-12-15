#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype> // for isalpha, toupper
using namespace std;

bool cmp(const pair<char,int> &a, const pair<char,int> &b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

void f(string s){
    map<char, int> m;
    for(char c:s){
        m[c]++;
    }
    // 轉換成vector(pair) => 做排序
    vector<pair<char,int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);
    // 輸出
    for (auto &p : vec) {
        cout << p.first << " " << p.second << endl;
    }
}

int main(){
    int t;
    cin >> t;
    cin.ignore(); //吃掉緩衝區的換行符號
    string s;
    string ans="";
    while(t--){
        getline(cin, s);
        for(char c:s){
            if (isalpha(c)) ans +=toupper(c);
        }
    }
    f(ans);
    return 0;
}