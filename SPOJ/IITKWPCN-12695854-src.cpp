#include <iostream>
using namespace std;

int main() {
	long long t,w,b;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&w,&b);
		if(b%2){
			printf("1.000000\n");
		}
		else{
			printf("0.000000\n");
		}
	}
	return 0;
}