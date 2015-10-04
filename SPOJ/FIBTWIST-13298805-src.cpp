#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a,MOD;

void multiply(ll f[2][2], ll m[2][2]){
  ll x =  ((f[0][0]*m[0][0])%MOD + (f[0][1]*m[1][0])%MOD)%MOD;
  ll y =  ((f[0][0]*m[0][1])%MOD + (f[0][1]*m[1][1])%MOD)%MOD;
  ll z =  ((f[1][0]*m[0][0])%MOD + (f[1][1]*m[1][0])%MOD)%MOD;
  ll w =  ((f[1][0]*m[0][1])%MOD + (f[1][1]*m[1][1])%MOD)%MOD;
  f[0][0] = (x)%MOD;
  f[0][1] = (y)%MOD;
  f[1][0] = (z)%MOD;
  f[1][1] = (w)%MOD;
}

void power(ll f[2][2],ll n){
	if(n==0||n==1){
		return;
	}
	ll m[2][2]={{1,1},{1,0}};
	power(f,n/2);
	multiply(f,f);
	if(n%2!=0){
		multiply(f,m);
	}
}

ll fib(ll n){
	ll f[2][2]={{1,1},{1,0}};
	if(n==0){
		return 0;
	}
	power(f,n-1);
	return f[0][0]%MOD;
}

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&a,&MOD);
		if(a==0){
			printf("0\n");
		}
		else if(a==1){
			printf("1\n");
		}
		else{
			ll res=(2*fib(a+2)-2-a)%MOD;
			if(res<0){
				res+=MOD;
			}
			printf("%lld\n",res);
		}
	}
	return 0;
}