#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,c,ctr=0,ans=0;
	cin>>n;
	c=n;
	while(n){
		if(n%10==7){
			ans+=pow(2,ctr);
		}
		ctr++;
		n=n/10;
	}
	ans+=pow(2,ctr);
	ans--;
	cout<<ans;
	return 0;
}