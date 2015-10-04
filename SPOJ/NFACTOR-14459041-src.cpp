#include <bits/stdc++.h>
using namespace std;

int primes[1000005], precomp[1000005][11];

void sieve(){
	//memset(primes,0,sizeof(primes));
	//memset(precomp,0,sizeof(precomp));
	primes[2]=1;
	for(int i=4;i<=1000000;i+=2){
		primes[i]++;
		//cout<<i<<" "<<primes[i]<<endl;
	}
	for(int i=3;i<=1000000;i+=2){
		if(!primes[i]){
			primes[i]=1;
			for(int j=i<<1;j<=1000000;j+=i){
				primes[j]++;
			}
		}
	}
	for(int i=1;i<=1000000;i++){
		//cout<<i<<endl;
		for(int j=0;j<11;j++){
			if(primes[i]==j){
				precomp[i][j]=precomp[i-1][j]+1;
			}
			else{
				precomp[i][j]=precomp[i-1][j];
			}
		}
	}
}

int main() {
	int t,a,b,n;
	sieve();
	scanf("%d",&t);
	while(t--){
		//cout<<t<<endl;
		scanf("%d %d %d",&a,&b,&n);
		//cout<<a<<" "<<b<<" "<<n<<endl;
		printf("%d\n",precomp[b][n]-precomp[a-1][n]);
	}
	return 0;
}