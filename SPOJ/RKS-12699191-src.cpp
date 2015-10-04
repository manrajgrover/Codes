#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct num{
	ll val, count, index;
	num(ll v,ll c,ll i){ val=v; count=c; index=i;}
};

bool operator<(num a, num b){
   	if(a.count==b.count){
   		return a.index<b.index;
   	}
   	else{
   		return a.count>b.count;
   	}
}

int main() {
	ll n,c,x;
	scanf("%lld%lld",&n,&c);
	map< ll, pair< ll,ll > > m;
	for(ll i=0;i<n;i++){
		scanf("%lld",&x);
		map< ll, pair< ll,ll > >::iterator it=m.find(x);
		if(it!=m.end()){
			it->second.second++;
		}
		else{
			m[x]=make_pair(i,1);
		}
	}
	vector<num> v;
	for(map< ll, pair< ll,ll > >::iterator it = m.begin();it!=m.end();it++){
		v.push_back(num(it->first,it->second.second,it->second.first));
	}
	sort(v.begin(),v.end());
	for(vector<num>::iterator it=v.begin();it!=v.end();it++){
		for(ll i=0;i<it->count;i++){
			printf("%lld ",it->val);
		}
	}
	printf("\n");
	return 0;
}