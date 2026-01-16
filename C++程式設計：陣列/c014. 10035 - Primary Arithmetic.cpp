#include <iostream>
    #include <string>

    using namespace std;
    int main(){
        string s1, s2;
        while(cin >> s1 >> s2){
            if(s1=="0" && s2=="0") break;
            int a1 = s1.length()-1;
            int a2 = s2.length()-1;
            int carry = 0;            // 進位
            int sum = 0;
            int count = 0;            // 紀錄進位次數 (很多題目會問這個)
            string ans = "";          // 儲存結果
            while (a1 >= 0 || a2 >= 0 || carry > 0){
                // 如果索引大於等於 0 則取值，否則當作 0
                int num1 = (a1 >= 0) ? (s1[a1] - '0') : 0;
                int num2 = (a2 >= 0) ? (s2[a2] - '0') : 0;
                sum = num1 + num2 + carry;
                if (sum >= 10) {
                    carry = sum / 10;
                    sum = sum % 10;
                    count++;
                } else {
                    carry = 0; // 記得如果沒進位，要手動把 carry 歸零
                }
                ans += (sum + '0'); // 將數字轉回字元接在後面
                a1--;
                a2--;
            }
            // reverse(ans.begin(), ans.end());
            if(count==1) cout << count << " carry operation." << endl;
            else if(count>1) cout << count << " carry operations." << endl;
            else cout << "No carry operation." << endl;
            
        }
        return 0;
    }