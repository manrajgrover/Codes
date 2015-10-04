#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000];

int main() {
    ll n,m;
    cin>>n>>m;
    ll ind;
    memset(a,0,sizeof(a));
    for(int i=1;i<=m;i++){
        ll max=-1;
        for(int j=1;j<=n;j++){
            ll t;
            cin>>t;
            if(t>max){
                max=t;
                ind=j;
            }
        }
        a[ind]++;
    }
    ll max=-1;
    ll ans=0;
    for(int i=1;i<=100;i++){
        if(a[i]>max){
            ans=i;
            max=a[i];
        }
    }
    cout<<ans;
    return 0;
}