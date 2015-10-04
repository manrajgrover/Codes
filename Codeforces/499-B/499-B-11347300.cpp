#include <bits/stdc++.h>
using namespace std;

map<string,string> ma;

int main() {
    int n,m;
    string x,y;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        ma[x]=y;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        string s=ma[x];
        if(s.length()<x.length()){
            cout<<s<<" ";
        }
        else{
            cout<<x<<" ";
        }
    }
    return 0;
}