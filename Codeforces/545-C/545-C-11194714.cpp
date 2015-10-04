#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector< pair< ll ,ll > > v;

int main() {
    ll n,x,h;
    cin>>n;
    if(n==1){
        cout<<n;
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>x>>h;
        v.push_back(make_pair(x,h));
    }
    sort(v.begin(),v.end());
    ll ctr=2,prev;
    prev=v[0].first;
    for(int i=1;i<n-1;i++){
        if(v[i].first-v[i].second>prev){
            ctr++;
            prev=v[i].first;
        }
        else if(v[i].first+v[i].second<v[i+1].first){
            prev=v[i].first+v[i].second;
            ctr++;
        }
        else{
            prev=v[i].first;
        }
    }
    cout<<ctr;
    return 0;
}