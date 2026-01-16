#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    long long int S, D;
    while (cin >> S >> D) {
        long long days = 0;
        long long group = S;
        while(true){
            days += group;
            if(days>=D){
                cout << group << endl;
                break;
            }
            group++;
        }
    }
    return 0;
}