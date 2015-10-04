#include <bits/stdc++.h>
using namespace std;

int prime[4000];
int k=2;

void sieve(){
	prime[0]=2;
	prime[1]=3;
	for(int i=5;i<33623;i++){
		int f=0;
		int x=(int)sqrt(i);
		for(int j=2;j<=x;j++){
			if(i%j==0){
				f=1;
				break;
			}
		}
		if(f!=1){
			prime[k++]=i;
		}
	}
}


int main() {
	sieve();
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		if(a<2){
			a=2;
		}
		for(int i=a;i<=b;i++){
			int f=0;
			int x=sqrt(i);
			for(int j=0;prime[j]<=x;j++){
				if(i%prime[j]==0){
					f=1;
					break;
				}
			}
			if(f==0){
				printf("%d\n",i);
			}
		}
		printf("\n");
	}
	return 0;
}