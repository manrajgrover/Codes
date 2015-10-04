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

int main(){
    ll w,k,n;
    cin>>k>>n>>w;
    ll ans=k*w*(w+1);
    ans=ans/2;
    ans=ans-n;
    if(ans<=0){
        cout<<"0";
        return 0;
    }
    cout<<ans;
    return 0;
}