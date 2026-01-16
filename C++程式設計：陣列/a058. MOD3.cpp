#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count0 = 0; // 3 的倍數
    int count1 = 0; // 餘 1
    int count2 = 0; // 餘 2

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 3 == 0)
            count0++;
        else if (x % 3 == 1)
            count1++;
        else
            count2++;
    }

    cout << count0 << " " << count1 << " " << count2 << endl;
    return 0;
}