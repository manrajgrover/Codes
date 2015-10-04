#include <iostream>
using namespace std;

long long fact(long long n){
	if(n==0||n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}

int main() {
	long long n,ans,k,x;
	while(scanf("%lld %lld",&n,&k)!=EOF){
		ans=fact(n);
		for(long long i=0;i<k;i++){
			scanf("%lld",&x);
			ans=ans/fact(x);
		}
		printf("%lld\n",ans);
	}
	return 0;
}