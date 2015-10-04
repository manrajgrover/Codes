#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		ll ans=n*(1+3*n);
		ans/=2;
		ans%=1000007;
		printf("%lld\n",ans);
	}
	return 0;
}