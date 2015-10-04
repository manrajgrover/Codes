#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,ans,x=0,n;
	scanf("%lld",&t);
	while(t--){
		x+=1;
		scanf("%lld",&n);
		ans=floor(sqrt(1+n))-1;
		printf("Case %lld: %lld\n",x,ans);
	}
	return 0;
}