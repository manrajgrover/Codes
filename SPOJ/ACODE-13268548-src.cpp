#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	while(1){
		char s[5005];
		cin>>s;
		if((atoi(s)==0)){
			break;
		}
		ll l=strlen(s);
		ll dp[l+5];
		dp[0]=1;
		if(s[0]<='2'&&s[1]<='6'){
			dp[1]=2;
		}
		else if(s[0]=='1'){
			dp[1]=2;
		}
		else{
			dp[1]=1;
		}
		if(s[1]=='0'){
			dp[1]=1;
		}
		for(ll i=2;i<l;i++){
			if(s[i]=='0'){
				dp[i]=dp[i-2];
			}
			else if(s[i-1]!='0'&&s[i-1]<='2'&&s[i]<='6'){
				dp[i]=dp[i-2]+dp[i-1];
			}
			else if(s[i-1]=='1'){
				dp[i]=dp[i-2]+dp[i-1];
			}
			else if(s[i]!='0'){
				dp[i]=dp[i-1];
			}
		}
		printf("%lld\n",dp[l-1]);
	}
	return 0;
}