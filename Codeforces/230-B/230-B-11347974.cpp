#include <bits/stdc++.h>
using namespace std;

int primes[1000005],prime[1000005],x;
set<double> s;

int in_primes(){
    memset(primes,1,sizeof(primes));
    for(int i=2;i*i<1000003;i++){
        if(primes[i]){
            for(int j=i*2;j<1000003;j+=i){
                primes[j]=0;
            }
        }
    }
    x=0;
    for(long long i=2;i<1000003;i++){
        if(primes[i]){
            s.insert(i);
            prime[x]=i;
            x++;
        }
    }
}

int main() {
    in_primes();
    int n;
    long long y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>y;
        double DDs=sqrt(y);
        bool in=s.find(DDs)!=s.end();
        if(in){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}