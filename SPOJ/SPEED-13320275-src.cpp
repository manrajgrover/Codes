#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}	
	else{
		gcd(b,a%b);
	}
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll a,b;
		scanf("%lld%lld",&a,&b);
		ll ans=abs(a-b);
		ans=ans/gcd(abs(a),abs(b));
		printf("%lld\n",ans);
	}
	return 0;
}