#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[10000007]={0};

void sieve(){
	ll x=ceil(sqrt(10000007));
    for(ll i=2;i<=x;i++){
        if(a[i]!=0){
           	continue;
        }
        for(ll j=2*i;j<=10000007;j+=i){
            if(a[j]==0){
                a[j]=i;
            }
        }
    }
}

int main() {
	ll n;
	sieve();
	while(scanf("%lld",&n)!=EOF){
		//cout<<"here"<<endl;
		if(n==1){
			printf("%lld\n",n);
			continue;
		}
		else{
			printf("1");
		}
		if(a[n]!=0){
			while(n%a[n]==0){
				printf(" x %lld",a[n]);
				if(a[n]==0){
					break;
				}
				n=n/a[n];
				if(a[n]==0){
					break;
				}
			}
		}
		printf(" x %lld\n",n);
	}
	return 0;
}