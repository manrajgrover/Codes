#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

unsigned long long summing(unsigned long long a, unsigned long long b){
	unsigned long long sa=((a)*(a+1))>>1;
	unsigned long long sb=((b)*(b+1))>>1;
	return (sa-sb)%mod;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		unsigned long long n,nsq,sum=0,y,x;
		scanf("%llu",&n);
		nsq=sqrt(n);
		for(int i=1;i<=nsq;i++){
			y=n/i;
			x=max(n/(i+1),nsq);
			sum+=(summing(y,x)*i)%mod;
			if(sum>=mod){
				sum-=mod;
			}
			sum+=(i*(n/i))%mod;
			if(sum>=mod){
				sum-=mod;
			}
		}
		printf("%llu\n",sum);
	}
	return 0;
}