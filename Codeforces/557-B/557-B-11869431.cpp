#include<bits/stdc++.h>
using namespace std;
#define ll long long
long double a[200005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,w;
    long double l=0.0,m;
    long double low=1e-15;
    int counter=0;
    
    cin>>n>>w;
    for(ll i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+(2*n));
    long double x=min(a[0],(a[n]/2.0));
    while(x-l>low && counter<500){
        m=(long double)(l+x)/(long double)(2.0);
        if((long double)(n*m+2*n*m)<=w){
            l=m;
        }
        else{
            x=m;
        }
        counter++;
    }
    if(n*x+2*n*x<=w){
        cout<<setprecision(7)<<n*x+2*n*x;
    }
    else{
        cout<<setprecision(7)<<n*l+2*n*l;
    }
    return 0;
}