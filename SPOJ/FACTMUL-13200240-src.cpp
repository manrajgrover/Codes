#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define llu unsigned long long

llu m=109546051211LLU;

llu mul(llu a,llu b){
	if(a>=m){
		a=a%m;
	}
	if(b>=m){
		b=b%m;
	}
	long double res=a;
	res=res*b;
	llu c=(llu)(res/m);
	a*=b;
	a-=c*m;
	a=a%m;
	if(a<0){
		a+=m;
	}
	return a;
}

int main() {
	ll n,ans=1,fact=1,cur;
	scanf("%lld",&n);
	if(n>=587117){
		printf("0\n");
	}
	else{
		for(ll i=2;i<=n;i++){
			//cout<<"here"<<fact<<endl;
			fact=(fact*i)%m;
			ans=mul(ans,fact);
			//cout<<ans<<endl;
		}
		printf("%lld\n",ans);
	}
	return 0;
}