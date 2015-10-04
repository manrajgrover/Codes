#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sum[200005];

int main() {
    int n,k;
    cin>>n>>k;
    ll x;
    ll s=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        s+=x;
        sum[i]=s;
    }
    ll ans=1,min=sum[k]-sum[0];
    for(int i=1;i<=n-k+1;i++){
        if(sum[i+k-1]-sum[i-1]<min){
            min=sum[i+k-1]-sum[i-1];
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}