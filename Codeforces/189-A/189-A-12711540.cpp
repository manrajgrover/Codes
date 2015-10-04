#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[4005];
ll a[3];
int main() {
    ll n;
    cin>>n>>a[0]>>a[1]>>a[2];
    for(ll i=1;i<=n;i++){
        dp[i]=-10000;
    }
    dp[0]=0;
    sort(a,a+3);
    for(ll i=0;i<3;i++){
        for(ll j=a[i];j<=n;j++){
            dp[j]=max(dp[j],dp[j-a[i]]+1);
        }
    }
    /*for(int i=1;i<=n;i++){
        cout<<dp[i]<<" ";
    }*/
    //cout<<endl;
    cout<<dp[n]<<endl;
    return 0;
}