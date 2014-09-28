#include <iostream>
#include <algorithm>
using namespace std;
 
long long a[1000000];
 
int main() {
	long long t,n,total;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		total=0;
		for(long i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		stable_sort(a,a+n);
		for(long i=n-1;i>=0;i-=2){
			total+=a[i];
		}
		printf("%lld\n",total);
	}
	return 0;
} 