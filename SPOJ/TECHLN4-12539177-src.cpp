#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

int main() {
	long long t,x1,y1,x2,y2,k=0;
	cin>>t;
	//scanf("%lld",&t);
	while(t--){
		k++;
		cin>>x1>>y1>>x2>>y2;
		//scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		if(x1==x2 && y1==y2){
			cout<<"Case #"<<k<<": "<<0<<endl;
		}
		else{
			cout<<"Case #"<<k<<": "<<gcd(abs(x1-x2),abs(y1-y2))-1<<endl;
		}
	}
	return 0;
}