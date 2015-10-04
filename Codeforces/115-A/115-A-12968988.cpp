// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

vector<vector<int>> g;
vector<int> root;
vector<bool> v;
int ans;

int dfs(int x){
    v[x]=true;
    int ans=0;
    for(int i=0;i<g[x].size();i++){
        ans=max(ans,dfs(g[x][i]));
    }
    return ans+1;
}

int main() {
    int n;
    cin>>n;
    int x;
    v.resize(n);
    g.resize(n);
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==-1){
            root.push_back(i);
        }
        else{
            g[x-1].push_back(i);
        }
    }
    fill(v.begin(),v.end(),false);
    int ans=-10000;
    for(int i=0;i<root.size();i++){
        ans=max(ans,dfs(root[i]));
    }
    cout<<ans;
    return 0;
}