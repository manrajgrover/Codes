#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d(x) (s[x]-'0')
int dp[105][10];
string ans[105][10];

int main() {
    string s;
    cin>>s;
    memset(dp,0,sizeof(dp));
    dp[0][0]++;
    ans[0][0]="";
    dp[0][d(0)%8]++;
    ans[0][d(0)%8]=s[0];
    for(int i=1;i<s.length();i++){
        for(int j=0;j<8;j++){
            if(dp[i-1][j]){
                ans[i][j]=ans[i-1][j];
                ans[i][(j*10+d(i))%8]=ans[i-1][j]+s[i];
            }
            dp[i][j]=dp[i][j]|dp[i-1][j];
            dp[i][(j*10+d(i))%8]|=dp[i-1][j];
        }
    }
    for(int i=0;i<s.length();i++){
        if(dp[i][0]&&ans[i][0].length()){
            cout<<"YES\n"<<ans[i][0];
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}