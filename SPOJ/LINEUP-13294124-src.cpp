#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[11][2048];
int a[11][11];

inline void read_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}


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
	int t;
	read_int(t);
	while(t--){
		for(int i=0;i<11;i++){
			for(int j=0;j<11;j++){
				read_int(a[i][j]);
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