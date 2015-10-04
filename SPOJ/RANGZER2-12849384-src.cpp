#include <iostream>
using namespace std;

long long zeroCount(long long k){
    long long zeros = 0;
    while(k) {
        zeros += (k % 10) == 0;
        k /= 10;
    }
    return zeros;
}

long long Z(long long n){
    if (n == 0) {
        return 0;
    }
    if (n <= 10) {
        return 1;
    }
    long long k = n/10, r = n%10;
    long long zeros = k + 10*(Z(k)-1);
    if (r > 0) {
        zeros += r*zeroCount(k) + 1;
    }
    return zeros;
}

long long zeros_in_range(long long low,long long high){
    return Z(high+1) - Z(low);
}

int main() {
	long long t,x,y;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&x,&y);
		printf("%lld\n",zeros_in_range(x,y));
	}
	return 0;
}