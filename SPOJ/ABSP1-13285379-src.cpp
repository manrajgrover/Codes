#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[10005];

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		ll fact=-(n-1),total=0;
		for(ll i=0;i<n;i++){
			total=total+fact*a[i];
			fact+=2;
		}
		printf("%lld\n",total);
	}
	return 0;
}