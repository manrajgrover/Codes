#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];
ll dp[100005];

int main() {
    int n;
    memset(a,0,sizeof(a));
    memset(dp,0,sizeof(dp));
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a[x]++;
    }
    dp[1]=a[1];
    dp[0]=0LL;
    for(int i=2;i<=100002;i++){
        dp[i]=max(dp[i-1],dp[i-2]+i*a[i]);
    }
    cout<<dp[100002]<<"\n";
    return 0;
}