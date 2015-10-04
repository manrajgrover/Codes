/*
*	By manrajsingh
*	Do not copy -_-
*   Question: CodeForces 513B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
    ll n,m,sum,cur=0,minval=0,maxval=0;
    cin>>n>>m;
    ll a[n+2];
    for(ll i=0;i<n;i++){
    	a[i]=i+1;
    }
    do{
    	sum=0;
		for(ll i=0;i<n;i++){
			for(ll j=i;j<n;j++){
				minval=a[i];
				for(ll k=i;k<=j;k++){
					minval=min(a[k],minval);
				}
            	sum+=minval;
       		}
      	}
      	maxval= max(maxval,sum);
    }while(next_permutation(a,a+n));
   	for(ll i=0;i<n;i++){
   		a[i]=i+1;
   	}
   	do{
	   sum = 0;
	   for(ll i=0;i<n;i++){
            for(ll j=i;j<n;j++){
            	minval=a[i];
				for(ll k=i;k<=j;k++){
					minval=min(a[k],minval);
				}
            	sum+=minval;
        	}
		}
		if(sum==maxval){
			cur++;
		}
    	if(cur==m){
        	break;
		}
    }while(next_permutation(a,a+n));
   	for(ll i=0;i<n;i++){
   		cout<<a[i]<<" ";
   	}
  	cout<<"\n";
    return 0;
}