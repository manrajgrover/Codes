#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[50],ans[100],an,n,k;

void f(int i,int cnt,ll c){
	ll temp;
	an=min(an,c);
	if(i==n||cnt==k){
		return;
	}
	temp=c&ans[i];
	if(temp>=an){
		return ;
	}
	temp=c&a[i];
	f(i+1,cnt+1,temp);
	f(i+1,cnt,c);
}

int main() {
	long long t,x=0,temp=1;
	for(long long i=1;i<=63;i++){
    	temp = temp*2;
    }
    temp = temp-1;
	scanf("%lld",&t);
	while(t--){
		x++;
		scanf("%lld%lld",&n,&k);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		for(ll i=0;i<n;i++){
      		ans[i] = a[i];
      		for(ll j=i;j<n;j++){
       			ans[i] = a[j]&ans[i];
      		}
     	}
     	an=temp;
     	f(0,0,temp);
		printf("Case #%lld: %lld\n",x,an);
	}
	return 0;
}