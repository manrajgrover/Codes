// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

vector<pair<int,int>> v;
ll sum[100005];
int main() {
    int n,d;
    cin>>n>>d;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        sum[i+1]=sum[i]+v[i].second;
    }
    ll ans=0;
    for(int i=0;i<v.size();i++){
        int f= upper_bound(v.begin(),v.end(),make_pair(v[i].first+d,0))-v.begin();
        if(sum[f]-sum[i]>ans){
            ans=sum[f]-sum[i];
        }
    }
    cout<<ans;
    return 0;
}