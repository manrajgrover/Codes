#include <bits/stdc++.h>
using namespace std;
#define ll long long

map<ll,ll> m;

ll f(ll n){
	if(n==0){
		return 0;
	}
	else if(m[n]!=0){
		return m[n];
	}
	if(n>=n/2+n/3+n/4){
		m[n]=n;
		return n;
	}
	else{
		m[n]=f(n/2)+f(n/3)+f(n/4);
		return m[n];
	}
}

int main() {
	ll n;
	while(scanf("%lld",&n)!=EOF){
		ll x=f(n);
		printf("%lld\n",x);
	}
	return 0;
}