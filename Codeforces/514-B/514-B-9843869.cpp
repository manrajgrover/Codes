#include <bits/stdc++.h>
using namespace std;
#define ll long long

double inf=99999.9;

int main() {
	ll n,p,q,x,y,den,num;
	cin>>n>>p>>q;
	double m;
	set<double> s;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		num=y-q;
		den=x-p;
		if(p==x){
			s.insert(inf);
		}
		else{
			m=(double)(num)/(double)(den);
			s.insert(m);
		}
	}
	ll ans=s.size();
	cout<<ans<<endl;
	return 0;
}