#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll a1,a2,a3,a4,a5,a6;
    cin>>a1>>a2>>a3>>a4>>a5>>a6;
    ll ans= (a1+a2+a3)*(a1+a2+a3)-a1*a1-a3*a3-a5*a5;
    cout<<ans;
    return 0;
}