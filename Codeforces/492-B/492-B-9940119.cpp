/*
*	By manrajsingh
*	Do not copy -_-
*	Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	ll n,l,x;
	set<ll> s;
	cin>>n>>l;
	for(ll i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	vector<ll> v(s.begin(),s.end());
	double ans=0.00,max=0.00;
	for(int i=1;i<v.size();i++){
		if(v[i]-v[i-1]>max){
			max=v[i]-v[i-1];
		}
	}
	ans=max/2;
	if(v[0]-0>ans){
		ans=v[0];
		max=v[0];
	}
	if(l-v[v.size()-1]>ans){
		ans=l-v[v.size()-1];
		max=l-v[v.size()-1];
	}
	printf("%0.10lf\n",ans);
	return 0;
}