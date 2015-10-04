#include <bits/stdc++.h>
using namespace std;

int a[20];

int main() {
	int dp[20];
	for(int i=0;i<20;i++){
		dp[i]=1;
	}
	int n;
	scanf("%d",&n);
	/*if(n==1){
		cout<<"1";
		return 0;
	}*/
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i]&&(dp[i]<(dp[j]+1))){
				dp[i]=dp[j]+1;
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	return 0;
}