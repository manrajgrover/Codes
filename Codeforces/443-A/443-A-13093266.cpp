// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int dp[100];

int main() {
    string s;
    getline(cin,s);
    int ans=0;
    memset(dp,0,sizeof(dp));
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='}'||s[i]==','||s[i]==' '){
            continue;
        }
        if(dp[s[i]-'a']==0){
            dp[s[i]-'a']=1;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}