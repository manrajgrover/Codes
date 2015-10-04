#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		double a,b,S;
		scanf("%lf%lf%lf",&a,&b,&S);
		double x=a+b,y=7*a+5*b+2*S,z=12*S;
		ll n=(llrintl)((y+sqrtl(y*y-4*x*z))/(2*x));
		ll d=(llrintl)((b-a)/((n-6)));
		printf("%lld\n",n);
		ll start=(llrintl)(a-2*d);
		for(ll i=0;i<n;i++){
			printf("%lld ",start+i*d);
		}
		printf("\n");
	}
	return 0;
}