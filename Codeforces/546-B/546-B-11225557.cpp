/*
*   By manrajsingh
*   Do not copy -_-
*   Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}

ll a[5000];

int main(){
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ctr=0;
    for(ll i=1;i<n;i++){
        if(a[i]>a[i-1]){
            continue;
        }
        ctr+=a[i-1]-a[i]+1;
        a[i]=a[i-1]+1;
    }
    cout<<ctr;
    return 0;
}