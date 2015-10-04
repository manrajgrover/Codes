#include <iostream>
using namespace std;

int main() {
	long long t,a,b,s,x,d,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld%lld",&a,&b,&s);
		n=(2*s)/(a+b);
		d=(b-a)/(n-5);
		x=a-2*d;
		printf("%lld\n",n);
		for(long long i=0;i<n;i++){
			printf("%lld ",x+i*d);
		}
	}
	return 0;
}