#include <iostream>
#include <algorithm>
using namespace std;
int arr[1505]={0};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,n_copy,n_copy2,num;
	while(cin>>n) {
		n_copy=n;
		num=1;
		while(n>num){
			n-=num;
			num++;
		}
		n_copy2=n;
		if(num%2==0){
			cout<<"TERM "<<n_copy<<" IS "<<n_copy2<<"/"<<(num-n_copy2+1)<<"\n";
		}
		else{
			cout<<"TERM "<<n_copy<<" IS "<<(num-n_copy2+1)<<"/"<<n_copy2<<"\n";
		}
	}
    return 0;
}