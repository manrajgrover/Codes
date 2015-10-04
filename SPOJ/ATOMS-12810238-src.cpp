#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,n,m,k,ans,z;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld%lld",&n,&k,&m);
		if(n>m){
			ans=0;
		}
		else{
			z=(long long)(logl((double)m/(double)n)/logl((double)k));
			if(z>0){
				ans=z;
			}
			else{
				ans=0;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}