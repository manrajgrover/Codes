#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[15];

ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

int main() {
	ll t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		ll prod=1;
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
			prod=prod*abs(a[i]);
		}
		ll num=0;
		for(ll i=0;i<n;i++){
			num=num+(prod/a[i]);
		}
		double d=gcd(prod,num);
		prod=prod/d;
		num=num/d;
		double ans=(double)prod/(double)num;
		printf("%lf\n",ans);
	}
	return 0;
}