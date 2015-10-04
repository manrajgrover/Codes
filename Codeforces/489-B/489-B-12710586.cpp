#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[105],b[105];
int dp[105][105];

int main() {
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    memset(dp,0,sizeof(dp));
    for(int i=0;i<m;i++){
        if(abs(b[i]-a[0])<=1){
            dp[0][i]=1;
        }
        else if(i-1>=0){
            dp[0][i]=dp[0][i-1];
        }
    }
    for(int i=0;i<n;i++){
        if(abs(b[0]-a[i])<=1){
            dp[i][0]=1;
        }
        else if(i-1>=0){
            dp[i][0]=dp[i-1][0];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}