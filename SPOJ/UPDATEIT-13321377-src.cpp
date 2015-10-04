#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,q,bit[1000005];

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
}

inline int inp(){
	int noRead=0;
	char p=getchar_unlocked();
	for(;p<33;){
		p=getchar_unlocked();
	};
	while(p>32){
		noRead = (noRead << 3) + (noRead << 1) + (p - '0');
		p=getchar_unlocked();
	}
return noRead;
};
*/

void qupdate(ll index,ll val){
	while(index<=n){
		bit[index]+=val;
		index += (index & (-index));
	}
}

ll query(int r){
	ll ans=0;
	while(r>0){
		ans+=bit[r];
		r-=(r&(-r));
	}
	return ans;
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll ch,x,a,b,val;
		scanf("%lld%lld",&n,&q);
		//cout<<n<<" "<<q<<endl;
		memset(bit,0,sizeof(bit));
		while(q--){
			scanf("%lld%lld%lld",&a,&b,&val);
			//cout<<a<<" "<<b<<" "<<val<<endl;
			qupdate(a+1,val);
			qupdate(b+2,-1*val);
		}
		ll p;
		scanf("%lld",&p);
		for(int i=0;i<p;i++){
			scanf("%lld",&x);
			printf("%lld\n",query(x+1));
		}
	}
	return 0;
}