#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,q;
vector<ll> a,bit;

/*void ftree(ll n){
	ll val,k;
	memset(bit,0,sizeof(bit));
	for(ll i=1;i<=n;i++){
		val=a[i-1];k=i;
		while(k<=n){
			bit[k]+=val;
			k+=(k&(-k));
		}
	}
}*/

void qupdate(ll index,ll val){
	while(index<=bit.size()){
		bit[index]+=val;
		index += (index & (-index));
	}
}

ll qsum(ll r){
	ll ans=0;
	while(r>0){
		ans+=bit[r];
		r-=(r&(-r));
	}
	return ans;
}

int main() {
	ll ch,x,st,end;
	scanf("%lld",&n);
	a.resize(n);
	for(ll i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	scanf("%lld",&q);
	bit.resize(n+q+1,0);
	ll ct=bit.size()-n;
	for(ll i=0;i<n;i++){
		qupdate(ct+i,a[i]);
	}
	while(q--){
		scanf("%lld",&ch);
		if(ch==1){
			scanf("%lld%lld",&st,&end);
			printf("%lld\n",qsum(ct+end-1)-qsum(ct+st-2));
		}
		else{
			scanf("%lld",&x);
			ct--;
			qupdate(ct,x);
		}
	}
	return 0;
}