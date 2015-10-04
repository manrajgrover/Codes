#include <iostream>
using namespace std;
#define ll long long
int main() {
	ll t,n,f,a[10005];
	scanf("%lld",&t);
	while(t--){
		f=0;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		for(ll i=1;i<n;i++){
			if(a[i]>=a[i-1]){
				a[i]=a[i]-a[i-1];
				a[i-1]=0;
			}
			else{
				f=1;
				break;
			}
		}
		if(a[n-1]==0&&f==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}