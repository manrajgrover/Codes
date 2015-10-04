#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll x,y;
		scanf("%lld%lld",&x,&y);
		if(x==0&&y==0){
			printf("0\n");
		}
		else if(x==y&&x%2==0&&x>=0&&y>=0){
			printf("%lld\n",2*x);
		}
		else if((x-y)==2&&y%2==1&&x%2==1&&x>=0&&y>=0){
			printf("%lld\n",x+y-1);
		}
		else if((x-y)==2&&y%2==0&&x%2==0&&x>=0&&y>=0){
			printf("%lld\n",x+y);
		}
		else if(x==y&&x%2==1&&x>=0&&y>=0){
			printf("%lld\n",2*x-1);
		}
		else{
			printf("No Number\n");
		}
	}
	return 0;
}