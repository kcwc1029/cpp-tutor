/*找出頻率最高數字*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    getline(cin,s);
    while (t--)
    {
        int alphabet[26]={0}; //這裡一定要括弧!!! 不可以只寫int alphabet[26]，他裡面指標會亂跑 
        getline(cin,s);
        int most=0;
        for (int i = 0; i < s.size(); i++)
        {
            int index=-1;
            if (s[i]>='A' and s[i]<='Z')
            {
                index = s[i] - 'A';
            }
            if (s[i]>='a' and s[i]<='z')
            {
                index = s[i] - 'a';
            }
            if (index>-1)
            {
                alphabet[index]++;
                most=max(most,alphabet[index]);
            }
            
            
        }
        for (int i = 0; i < 26; i++)
        {
            if (alphabet[i]==most)
            {
                cout<<(char)('a'+i);
            }
            
        }
        cout<<"\n";  
    }
    return 0;

}