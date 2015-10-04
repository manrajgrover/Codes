/*
*	By manrajsingh
*	Do not copy -_-
*   Question: 507C
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pow_2[55];

int main(){
	ll n,h,ans=0;
	cin>>h>>n;
	memset(pow_2,0,sizeof(pow_2));
	pow_2[0]=1;
	for(int i=1;i<51;i++){
		pow_2[i]=pow_2[i-1]*2;
		//cout<<pow_2[i]<<endl;
	}
	for(int i=h-1;i>=0;i--){
		if(n<=pow_2[i]){
			ans++;
			n=pow_2[i]-n+1;
		}
		else{
			ans+=pow_2[i+1];
			n-=pow_2[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}