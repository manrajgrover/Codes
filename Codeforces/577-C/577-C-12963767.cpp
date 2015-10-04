// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int primes[10000];

bool prime(int c){
    for(int i=2;i<c;i++){
        if(c%i==0){
            return false;
        }
    }
    return true;
}

int main() {
    ll n;
    cin>>n;
    int ctr=0;
    for(int i=2;i<=n;i++){
        if(prime(i)){
            primes[ctr++]=i;
        }
    }
    int x=ctr;
    int mul=0;
    for(int i=0;i<x;i++){
        mul=primes[i]*primes[i];
        while(mul<=n){
            primes[ctr++]=mul;
            mul=mul*primes[i];
        }
    }
    cout<<ctr<<"\n";
    for(int i=0;i<ctr;i++){
        cout<<primes[i]<<" ";
    }
    return 0;
}