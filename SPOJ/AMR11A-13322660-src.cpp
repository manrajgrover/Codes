//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[505][505];

ll dp_do(ll r,ll c){
	ll m=0;
	a[r-1][c-1]=1;
	for(ll i=c-2;i>=0;i--){
		a[r-1][i]=a[r-1][i+1]-a[r-1][i];
		if(a[r-1][i]<=0){
			a[r-1][i]=1;
		}
	}
	for(ll i=r-2;i>=0;i--){
		a[i][c-1]=a[i+1][c-1]-a[i][c-1];
		if(a[i][c-1]<=0){
			a[i][c-1]=1;
		}
	}
	for(ll i=r-2;i>=0;i--){
		for(ll j=c-2;j>=0;j--){
			a[i][j]=min(a[i][j+1]-a[i][j],a[i+1][j]-a[i][j]);
			if(a[i][j]<=0){
				a[i][j]=1;
			}
		}
	}
	return a[0][0];
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll r,c;
		memset(a,0,sizeof(a));
		scanf("%lld%lld",&r,&c);
		for(ll i=0;i<r;i++){
			for(ll j=0;j<c;j++){
				scanf("%lld",&a[i][j]);
			}
		}
		/*for(ll i=0;i<r;i++){
			for(ll j=0;j<c;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}*/
		ll ans=dp_do(r,c);
		printf("%lld\n",ans);
	}
	return 0;
}