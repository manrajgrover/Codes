//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159265358979323
#define e 2.71828182845904523536 

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		if(n==0||n==1||n==2){
			printf("1\n");
			continue;
		}
		ll ans=ceil(0.5*(log10(2*pi*n))+n*(log10(n)-log10(e)));
		printf("%lld\n",ans);
	}
	return 0;
}