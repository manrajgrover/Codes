#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,m;
    cin>>n>>m;
    ll diff=n-m;
    if(n==1&&m==1){
        cout<<1;
        return 0;
    }
    if(diff>(m-1)){
        cout<<m+1;
        return 0;
    }
    else if(diff<(m-1)){
        cout<<m-1;
        return 0;
    }
    else{
        cout<<m-1;
    }
    return 0;
}