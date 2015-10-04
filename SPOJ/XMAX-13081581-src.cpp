#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ll t;
	//scanf("%lld",&t);
	//while(t--){
		ll n,k,x;
		vector<ll> a;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld",&x);
			a.push_back(x);
		}
		sort(a.rbegin(),a.rend());
		ll s=1;
		while(s<=a[0]){
			s<<=1;
		}
		s>>=1;
		//a[0]=k^a[0];
		for(ll t=0;s>=1;s>>=1){
			ll i=t;
			while(i<n && ((a[i])&s)==0){
				i++;
			}
			if(i>=n){
				continue;
			}
			swap(a[t],a[i]);
			for(ll j=0;j<n;j++){
				//a[j]=k^a[j];
				if(j!=t&&((a[j])&s)!=0){
					a[j]=a[j]^a[t];
					//a[j]=k^a[j];
				}
			}
			t++;
		}
		ll r=0;
		for(ll i=0;i<n;i++){
			r=r^a[i];
		}
		printf("%lld\n",r);
	//}
} 