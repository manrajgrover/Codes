#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[200005],left_a[200005],right_a[200005],count_a;

void merge(ll p,ll q,ll r){
	ll i,j,k,ind1,ind2;    
	for(i=p,ind1=1;i<=q;i++){    
		left_a[ind1++]=a[i];    
	}
	left_a[ind1]=1000000000;    
	for(i=q+1,ind2=1;i<=r;i++){    
		right_a[ind2++]=a[i];    
	}    
	right_a[ind2]=1000000000;    
	i=j=1;    
	for(k=p;k<=r;k++){    
		if(left_a[i]>right_a[j]){    
			count_a+=ind1-i;    
			a[k]=right_a[j];
			j++;    
		}    
		else{    
			a[k]=left_a[i];    
			i++;    
		}    
	}
}
  
void mergesort(ll p,ll r){    
	if(p<r){    
		ll q=(p+r)/2;    
		mergesort(p,q);    
		mergesort(q+1,r);    
		merge(p,q,r);    
	}    
}    


int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		count_a=0;
		mergesort(0,n-1);
		printf("%lld\n",count_a);
	}
	return 0;
}