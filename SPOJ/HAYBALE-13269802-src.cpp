#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,q,med[1000005],bit[1000005];

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


void qupdate(int index,int val){
	while(index<=n){
		bit[index]+=val;
		index += (index & (-index));
	}
}

int query(int r){
	int ans=0;
	while(r>0){
		ans+=bit[r];
		r-=(r&(-r));
	}
	return ans;
}

int main() {
	int ch,x,a,b;
	n=inp();
	q=inp();
	memset(bit,0,sizeof(bit));
	while(q--){
		a=inp();
		b=inp();
		qupdate(a,1);
		qupdate(b+1,-1);
	}
	int j=0;
	for(int i=0;i<=n;i++){
		med[j++]=query(i);
	}
	sort(med,med+j);
	printf("%d\n",med[(n/2)+1]);
	return 0;
}