#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dp[105],a[105];

int main() {
    int n;
    cin>>n;
    int ctr=0;
    int x;
    memset(dp,0,sizeof(dp));
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1){
            ctr++;
            a[i]=-1;
        }
        else{
            a[i]=1;
        }
    }
    int maxx=a[0];
    dp[0]=a[0];
    for(int i=0;i<n;i++){
        dp[i]=max(dp[i-1]+a[i],a[i]);
        maxx=max(dp[i],maxx);
    }
    cout<<maxx+ctr;
    return 0;
}