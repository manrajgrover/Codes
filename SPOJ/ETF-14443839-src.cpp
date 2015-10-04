#include <bits/stdc++.h>
using namespace std;

int f(int n){
	int r=n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			while(n%i==0){
				n/=i;
			}
			r-=r/i;
		}
	}
	if(n>1){
		r-=r/n;
	}
	return r;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int ans=f(n);
		printf("%d\n",ans);
	}
	return 0;
}