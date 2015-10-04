//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[300005];

int main() {
	ll n,m;
	scanf("%lld%lld",&n,&m);
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	ll curmax=0,max=0,j=0;
	for(ll i=0;i<n;i++){
		if(curmax+a[i]<m){
			curmax+=a[i];
		}
		else if(curmax+a[i]==m){
			max=curmax+a[i];
			break;
		}
		else{
			ll r=curmax;
			while(r+a[i]>m){
				curmax-=a[j];
				r=curmax;
				if(curmax+a[i]<m){
					curmax+=a[i];
				}
				else if(curmax+a[i]==m){
					curmax=curmax+a[i];
					max=curmax;
					break;
				}
				j++;
			}
		}
		if(max<curmax){
			max=curmax;
		}
	}
	printf("%lld\n",max);
	return 0;
}