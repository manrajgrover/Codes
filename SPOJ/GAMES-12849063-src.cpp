#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

int main() {
	ll t,l;
	char num[1000];
	scanf("%lld",&t);
	while(t--){
		scanf("%s",num);
		l=strlen(num);
		ll flag=0,n=0,c=0;
		for(ll i=0;i<l;i++){
			if(num[i]=='.'){
				flag=1;
			}
			else if(flag==1){
				n=(num[i]-'0')+10*n;
				c++;
			}
		}
		ll d=pow(10,c);
		ll g=gcd(n,d);
		printf("%lld\n",d/g);
	}
	return 0;
}