#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long n,x,i,ans;
	while(cin>>n){
		if(n==0){
			break;
		}
		ans=0;
		i=0;
		while(n>pow(2,i)){
			n=n-pow(2,i);
			i++;
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}