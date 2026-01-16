#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string num;
        cin >> num;

        int product = 1;
        for (char digit : num) {
            product *= (digit - '0');
        }

        cout << product << endl;
    }

    return 0;
}