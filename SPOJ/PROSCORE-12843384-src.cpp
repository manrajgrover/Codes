#include <iostream>
using namespace std;

int main() {
	long long t,o=0;
	scanf("%lld",&t);
	while(t--){
		o++;
		long long n,p;
		scanf("%lld%lld",&n,&p);
		long long solvedbyOne[12]={0},minsolvedbyOne[12]={0},count[12]={0},x,ct=0;
		for(long long i=0;i<n;i++){
			long long ctr=0;
			for(long long j=0;j<p;j++){
				scanf("%lld",&x);
				if(x==1){
					solvedbyOne[j]=1;
					minsolvedbyOne[i]=1;
					ctr++;
				}
			}
			count[i]=ctr;
		}
		long long y=0;
		for(long long i=0;i<p;i++){
			if(solvedbyOne[i]==1){
				y++;
			}
		}
		long long bit1,bit2,bit3;
		if(y==p){
			bit1=1;
		}
		else{
			bit1=0;
		}
		y=0;
		for(long long i=0;i<n;i++){
			if(count[i]==p){
				y=1;
			}
			if(minsolvedbyOne[i]==1){
				ct++;
			}
		}
		if(ct==n){
			bit2=1;
		}
		else{
			bit2=0;
		}
		if(y==1){
			bit3=0;
		}
		else{
			bit3=1;
		}
		printf("Case %lld: %lld\n",o,4*bit1+2*bit2+1*bit3);
	}
	return 0;
}