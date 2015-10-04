#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		long long n,m;
		scanf("%lld %lld",&n,&m);
		if(n<=m){
			if(n%2==0){
				printf("L\n");
			}
			else{
				printf("R\n");
			}
		}
		else{
			if(m%2==0){
				printf("U\n");
			}
			else{
				printf("D\n");
			}
		}
	}
	return 0;
}