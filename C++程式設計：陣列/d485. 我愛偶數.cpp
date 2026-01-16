#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 隱藏測資會TLE
// int main(){
//     int a, b;
//     int count=0;
//     cin >> a >> b;
//     for(int i=a;i<=b;i++){
//         if(i%2==0) count++;
//     }
//     cout << count <<endl;
//     return 0;
// }

int main(){
    int a, b;
    cin >> a >> b;
    int count = (b / 2) - (a / 2) + (1 - (a % 2));
    cout << count <<endl;
    return 0;
}