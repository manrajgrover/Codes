#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n,m;
bool f;
vector<ll> v;

void r(ll x){
    if(x<0){
        if(m==0){
            f=true;
        }
        return;
    }
    r(x-1);
    m=m+v[x];
    r(x-1);
    m=m-2*v[x];
    r(x-1);
    m=m+v[x];
}


int main() {
    cin>>n>>m;
    v.push_back(1);
    ll p=1,ctr=0;
    if(n<=3){
        cout<<"YES\n";
        return 0;
    }
    while(p<=m){
        v.push_back(p*n);
        p=p*n;
        ctr++;
    }
    f=false;
    r(ctr);
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}