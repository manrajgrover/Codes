#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
		long long unsigned int k;
		int n,i,fact=1;
		scanf("%d%llu",&n,&k);
		long long unsigned int a[n],b[n];
		for(i=0;i<n;i++){
			scanf("%llu",&a[i]);
		}
		for(;k;k>>=1){
			if(k&1){
				for(i=0;i<n;i++){
					b[i]=a[i]^a[(i+fact)%n]^a[(i+n-fact)%n];
				}
				for(i=0;i<n;i++){
					a[i]=b[i];
				}
			}
			fact=fact*2%n;
		}
		for(i=0;i<n;i++){
			printf("%llu ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
