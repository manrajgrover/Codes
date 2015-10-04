#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[100005];

int main() {
    int n,s,t;
    cin>>n>>s>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll ans=0;
    int cur=s;
    while(ans<10000000&&cur!=t){
        cur=a[cur];
        ans++;
    }
    if(ans==10000000){
        cout<<"-1\n";
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}