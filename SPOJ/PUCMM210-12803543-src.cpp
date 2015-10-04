#include <iostream>
using namespace std;
#define MOD 1000000003

long long pre[1000005];

int calc(){
	long long sum=0,c=0;
	for(long long i=1;i<=1000000;i++){
		c=(c+i*i*i)%MOD;
		pre[i]=(pre[i-1]+c)%MOD;
	}
}

int main() {
	calc();
	long long t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",pre[n]);
	}
	return 0;
}