#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum[100005];

int main() {
    string s;
    cin>>s;
    ll m;
    cin>>m;
    ll k=0;
    memset(sum,0,sizeof(sum));
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            k++;
        }
        sum[i]=k;
    }
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        x--;y--;
        cout<<sum[y]-sum[x]<<"\n";
    }
    return 0;
}