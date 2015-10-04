#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll a[2005],c[2005],lcs[2005][2005];

ll findlcs(ll la,ll lc){
	for(ll i=0;i<la;i++){
		lcs[0][i]=0;
	}
	for(ll i=0;i<lc;i++){
		lcs[i][0]=0;
	}
	for(ll i=0;i<la;i++){
		for(ll j=0;j<lc;j++){
			if(a[i]==c[j]){
				lcs[i+1][j+1]=lcs[i][j]+1;
			}
			else if(lcs[i+1][j]>=lcs[i][j+1]){
				lcs[i+1][j+1]=lcs[i+1][j];
			}
			else{
				lcs[i+1][j+1]=lcs[i][j+1];
			}
		}
	}
	return lcs[la][lc];
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll max=0,i=0,j,x;
		while(1){
			scanf("%lld",&x);
			if(x==0){
				break;
			}
			a[i++]=x;
		}
		while(1){
			scanf("%lld",&x);
			if(x==0){
				break;
			}
			else{
				j=0;
				c[j++]=x;
				while(1){
					scanf("%lld",&x);
					if(x==0){
						break;
					}
					c[j++]=x;
				}
				ll r=findlcs(i,j);
				if(r>max){
					max=r;
				}
			}
		}
		printf("%lld\n",max);
	}
	return 0;
}