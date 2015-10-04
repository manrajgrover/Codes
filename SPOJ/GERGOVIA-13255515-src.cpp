#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];

int main() {
	ll n;
	while(scanf("%lld",&n)==1&&n!=0){
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		ll w=0;
		for(ll i=1;i<n;i++){
			a[i]=a[i]+a[i-1];
			w+=abs(a[i-1]);
		}
		printf("%lld\n",w);
	}
	return 0;
}