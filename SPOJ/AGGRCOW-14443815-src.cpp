#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005],n,c;

ll l_s(ll d){
	ll cn=1;
	ll l=a[0];
	for(int i=1;i<n;i++){
		if(a[i]-l>=d){
			cn++;
			if(cn==c){
				return 1;
			}
			l=a[i];
		}
	}
	return 0;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		cin>>n>>c;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int s=a[0],e=a[n-1];
		while(e-s>1){
			int m=(e+s)/2;
			if(l_s(m)){
				s=m;
			}
			else{
				e=m;
			}
		}
		cout<<s<<"\n";
	}
	return 0;
}