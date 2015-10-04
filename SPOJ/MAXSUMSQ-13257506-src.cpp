//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 0x7F800000

ll a[100005];

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		ll sum=0,rmax=-inf,mn=0,rc=0,mc=1;
		for(ll i=0;i<n;i++){
			sum+=a[i];
			if(sum-mn>rmax){
				rmax=sum-mn;
				rc=mc;
			}
			else if(sum-mn==rmax){
				rc+=mc;
			}
			if(sum<mn){
				mn=sum;
				mc=1;
			}
			else if(sum==mn){
				mc++;
			}
		}
		printf("%lld %lld\n",rmax,rc);
	}
	return 0;
}