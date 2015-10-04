//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005],sumtree[100005];

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n,m,sum=0;
		scanf("%lld%lld",&n,&m);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
			sumtree[i]=sum;
		}
		ll ptotal=1000000000,pmax=0,f=0,left=-1;
		sum=0;
		for(ll i=0;i<n;i++){
			if(f==1){
				i--;
			}
			sum=sumtree[i]-sumtree[left];
			f=0;
			if(sum>m){
				f=1;
				left++;
			}
			if(pmax<i-left){
				pmax=i-left;
				ptotal=sum;
			}
			else if(pmax==i-left){
				if(ptotal>sum){
					ptotal=sum;
				}
			}
		}
		if(pmax==0){
			ptotal=0;
		}
		if(ptotal==1000000000){
			printf("0 0\n");
		}
		else{
			printf("%lld %lld\n",ptotal,pmax);
		}
	}
	return 0;
}
