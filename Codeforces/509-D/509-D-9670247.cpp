#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll w[105][105],a[105],b[105];

ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	else{
		gcd(b,a%b);
	}
}

int main() {
	ll k=0,n,m;
	cin>>n>>m;
	memset(w,0,sizeof(w));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>w[i][j];
			//cout<<w[i][j]<<" ";
		}
	}
	//cout<<endl;
	for(int i=0;i<m;i++){
		b[i]=w[0][i];
		//cout<<b[i]<<" ";
	}
	for(int i=0;i<n;i++){
		a[i]=w[i][0]-b[0];
		//cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			//cout<<k<<" ";
			k=gcd(k,abs(a[i]+b[j]-w[i][j]));
			//cout<<k<<endl;
		}
	}
	if(k==0){
		//cout<<"here";
		k=1000000000000000000;
	}
	for(int i=0;i<n;i++){
		if(a[i]<0){
			a[i]+=k;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if((a[i]+b[j])%k!=w[i][j]){
				cout<<"NO\n";
				return 0;
			}
		}
	}
	cout<<"YES\n";
	cout<<k<<'\n';
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<'\n';
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}