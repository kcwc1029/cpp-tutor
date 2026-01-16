/*
要注意的是把每一個數輸進arr的方式
利用
arr[d++]=temp%10;
temp/=10;
例如 1634 輸進去就是 arr[7]={4,3,6,1,None,None,None};
那裡面的d會變成4 (d++代表先放進去後d再加一)
32行for (int i = 0; i < d; i++)
他會跑0,1,2,3，剛剛好就是四位數
*/
#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
	int n,m;
	int ans=0; //計算有幾個阿姆斯壯數
	cin>>n>>m;
	for (int i = n; i <= m ; i++)
	{
		//要把n~m的每一位數字放進arr裡
		
		int arr[7];
		int temp=i;
		int d=0;
		while (temp)
		{
			arr[d++]=temp%10;
			temp/=10;
		}

		int sum=0;//嘗試算每個數字是否為阿姆斯壯數
		for (int i = 0; i < d; i++)
		{
			sum+=pow(arr[i],d);
		}
		if (sum==i){
			ans++;
			cout<<i<<" ";
		}
	}
	if (ans==0)//若沒有阿姆斯壯數就輸出"none"
	{
		cout<<"none";
	}
}