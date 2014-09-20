#include<stdio.h>
#include<math.h> 
#include<string.h> 
#include<stdlib.h>

#define DIFF_SIZE 100000

int myPrimes[DIFF_SIZE];
int cnt;

void populateMyPrimes(int N)
    {
        int i=0,j=0;
        bool primeArray[DIFF_SIZE];
        for(i=2;i<DIFF_SIZE;i++) {
            primeArray[i]=true;
            myPrimes[i]=0;
        }
        int myRange=floor(sqrt((double)N));
        int k=floor(sqrt((double)myRange));
        for(i=2;i<=k;i=i++){
            if(primeArray[i]==true) {
                for (j=i*i;j<= myRange;j=j+i){
                    primeArray[j]=false;
                }
            }
        }
        cnt=0;
        for(i=2;i<=myRange;i++){
            if(primeArray[i]==true && i>=M && i<=N) 
            {
                myPrimes[cnt++]=i; 
            }
        }
    }

int main() {
    int T; 
    scanf("%d",&T);
    int i,p=0,s;
    int N,M;
    bool primesNow[DIFF_SIZE];
    while(T--) {
        scanf("%d %d",&M,&N);
        for(i=0;i<DIFF_SIZE;i++)
            primesNow[i]=true;
        populateMyPrimes(N);
        for(i=0;i<cnt;i++)
        {
            p = myPrimes[i];
            s = M / p;
            s = s * p;

            for (int j = s; j <= N; j = j + p) {
                if (j < M) 
					continue;
                primesNow[j - M] = false;
            }
        }

        for (int i = 0; i < N - M + 1; ++i)
        {
            if (primesNow[i] == true && (i + M) != 1)
                printf("%d\n",i+M);
        }
    }
    return 0;
}
