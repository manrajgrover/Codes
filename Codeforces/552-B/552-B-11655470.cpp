#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll p(ll a, ll b){
    ll res=1;
    for(int i=0;i<b;i++){
        res=res*a;
    }
    return res;
}

int main() {
    ll x,a=0,ans=0,tens=10,ctr=0;
    cin>>x;
    if(x<=9){
        cout<<x<<endl;
        return 0;
    }
    while(a+(9*p(10,ctr))<x){
        ans+=(ctr+1)*(9*p(10,ctr));
        a+=(9*p(10,ctr));
        ctr++;
    }
    ans+=(x-a)*(ctr+1);
    cout<<ans;
    return 0;
}