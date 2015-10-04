#include <iostream>
using namespace std;

long long jose(long long n,long long k){
  if (n == 1)
    return 1;
  else
    return (jose(n - 1, k+1) + k-1) % n + 1;
}

int main() {
	long long t,n;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%lld\n",jose(n,1));
	}
	return 0;
}