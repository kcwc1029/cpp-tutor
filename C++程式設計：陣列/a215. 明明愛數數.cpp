#include <iostream>
using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        int sum = 0;
        int count = 0;
        while(true){
            count++;
            sum += n;
            n++;
            if(sum>m) break;
        }
        cout << count << endl;
    }
    return 0;
}