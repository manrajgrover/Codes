#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll phi[100005];

ll f(ll n){
	ll ans=1;
	if(n%2==0){
		ans=ans*(n-1);
		n=n/2;
		ans=ans*n;
	}
	else{
		ans=ans*(n);
		n=(n-1)/2;
		ans=ans*n;
	}
    return ans;
}

int main() {
	int t;
	scanf("%d",&t);
	phi[1]=1;
	for(ll i=2;i<=100000;i++){
		if(phi[i]==0){
			phi[i]=i-1;
			for(ll j=2*i;j<=100000;j+=i){
				if(phi[j]==0){
					phi[j]=j;
				}
				phi[j]=phi[j]/i;
				phi[j]=phi[j]*(i-1);
			}
		}
	}
	for(int i=2;i<100001;i++){
		phi[i]+=phi[i-1];
	}
	int x=0;
	while(t--){
		ll n;
		x++;
		scanf("%lld",&n);
		printf("Case %d: %lld\n",x,f(n+1)-phi[n]);
	}
	return 0;
}