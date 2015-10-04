#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll ans=n*(n+2)*(2*n+1);
		ans=ans/8;
		printf("%lld\n",ans);
	}
	return 0;
}