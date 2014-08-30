#include<stdio.h>
#include<math.h> 

#define DIFF_SIZE 100000

int main() {
    int T,cnt,N,M,i=0,j=0;
    scanf("%d",&T);
    int myPrimes[DIFF_SIZE];
    bool primeNow[DIFF_SIZE];
    while(T--) {
        scanf("%d %d",&M,&N);
        for(i=0;i<DIFF_SIZE;i++){
            primeNow[i]=true;
            myPrimes[i]=0;
        }
        int k=floor(sqrt((double)N));
        for(i=2;i<=k;i=i++){
            if(primeNow[i]==true) {
                for(j=i*i;j<=N;j=j+i){
                    primeNow[j]=false;
                }
            }
        }
        cnt=0;
        for(i=2;i<=N;i++){
            if(primeNow[i]==true) 
            {
                printf("%d\n",i);
            }
        }
	}
    return 0;
}