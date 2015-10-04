//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	std::ios::sync_with_stdio(false);
	ll a,b;
	cin>>a>>b;
	if(b==a){
		cout<<"infinity\n";
	}
	else if(b>a){
		cout<<"0\n";
	}
	else{
		ll ctr=0,sqra=ceil(sqrt(a-b)),diff=a-b;
		set<ll> s;
		for(ll i=1;i<=sqra;i++){
			if((diff)%i==0){
				if(i>b){
					s.insert(i);
				}
				if(diff/i>b){
					s.insert(diff/i);
				}
			}
		}
		cout<<s.size()<<'\n';
	}
	return 0;
}