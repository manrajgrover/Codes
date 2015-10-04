#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool p[1005000]={false};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    for(int i=2;i*i<1000001;i++){
        if(!p[i]){
            for(int j=i*i;j<1000001;j+=i){
                p[j]=true;
            }
        }
    }
    set<ll> r;
    for(ll i=2;i<1000001;i++){
        if(!p[i]){
            r.insert(i*i);
        }
    }
    int n;
    ll x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(r.find(x)!=r.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}