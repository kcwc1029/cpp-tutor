#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int a[7],b[7];
		string s="";
		for(int i=0;i<7;i++){
			cin>>a[i];
		}
		for(int i=0;i<7;i++){
			cin>>b[i];
		}
		if(a[1]==a[3] || b[1]==b[3] || a[1]!=a[5] || b[1]!=b[5]  )s+="A";
		if(a[6]==0 ||b[6]==1   )s+="B";
		if(a[1]==b[1] || a[3]==b[3] || a[5]==b[5] )s+="C";
		if(s=="")s+="None";
		s+="\n";
		cout<<s;
		
	}
	
	return 0;
}