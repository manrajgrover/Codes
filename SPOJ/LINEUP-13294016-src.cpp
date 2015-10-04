#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[11][2048];
int a[11][11];

ll bitmask(int pos,int remain){
	if(pos==11){
		return 0;
	}	
	if(dp[pos][remain]!=-1){
		return dp[pos][remain];
	}
	ll& ans=dp[pos][remain]=-INT_MAX;;
	for(int i=0;i<11;i++){
		//cout<<"here "<<l++<<endl;
		if((remain & (1<<i)) && a[i][pos]!=0){
			ans=max(ans,a[i][pos]+bitmask(pos+1,remain ^ (1<<i)));
		}
	}
	return ans;
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				scanf("%d",&a[i][j]);
			}
		}
		/*for(int i=0;i<11;i++){
			fill(dp[i],dp[i]+2048,-1);
		}*/
		/*for(ll i=0;i<11;i++){
			for(ll j=0;j<=2048;j++){
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}*/
		memset(dp,-1,sizeof(dp[0][0])*11*2048);
		cout<<bitmask(0,2047)<<endl;
	}
	return 0;
}