#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,sum,sub,ans;
	cin>>t;
	while(t--){
		cin>>sum>>sub;
		if((sum+sub)%2==1){
			cout<<"impossible\n";
			continue;	
		}
		if(sum<sub){
			cout<<"impossible\n";
			continue;
		}
		int big=(sum+sub)/2;
		int small=big-sub;
		cout<<big<<" "<<small<<"\n";
	}
    return 0;
}