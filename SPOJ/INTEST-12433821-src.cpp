#include <iostream>
using namespace std;

long long a[10000005]={0};

int main() {
	long long n,k,ctr=0;
	scanf("%lld%lld",&n,&k);
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
		if((a[i]%k)==0){
			ctr++;
		}
	}
	printf("%lld",ctr);
	return 0;
}