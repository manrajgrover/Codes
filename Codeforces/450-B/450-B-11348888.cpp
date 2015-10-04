#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll f[10];

int main() {
    ll x,y,n;
    cin>>x>>y;
    f[1]=x;f[2]=y;f[3]=y-x;f[4]=-x;f[5]=-y;f[6]=x-y;f[0]=x-y;
    cin>>n;
    x=n%6;
    if(x<0){
        x+=6;
    }
    ll ans=f[x]%mod;
    if(ans<0){
        ans+=mod;
    }
    cout<<ans;
    return 0;
}