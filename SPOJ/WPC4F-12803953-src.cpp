#include <bits/stdc++.h>
using namespace std;

long long a[25][4];

int main() {
	long long t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(long long i=0;i<n;i++){
			scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);
		}
		for(int i=1;i<n;i++){
			a[i][0]+=min(a[i-1][1],a[i-1][2]);
			a[i][1]+=min(a[i-1][0],a[i-1][2]);
			a[i][2]+=min(a[i-1][1],a[i-1][0]);
		}
		printf("%lld\n",min(a[n-1][0],min(a[n-1][1],a[n-1][2])));
	}
	return 0;
}