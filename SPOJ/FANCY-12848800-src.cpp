#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll power[35];

void powe(){
	power[0]=1;
	for(ll i=1;i<32;i++){
		power[i]=power[i-1]*2;
	}
}

int main() {
	ll t,p,ans,l;
	powe();
	char num[35];
	scanf("%lld",&t);
	while(t--){
		scanf("%s",num);
		l=strlen(num);
		ans=1;
		p=1;
		for(ll i=1;i<l;i++){
			if(num[i]==num[i-1]){
				p++;
			}
			else{
				ans=ans*power[p-1];
				p=1;
			}
		}
		ans=ans*power[p-1];
		printf("%lld\n\n",ans);
	}
	return 0;
}