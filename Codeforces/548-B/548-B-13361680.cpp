// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int a[505][505];
int ans[505];
int n,m;

int helper(int row){
    int ctr=0;
    int ret=0;
    while(ctr<m){
        int tot=0;
        while(a[row][ctr]==1&&ctr<m){
            ctr++;
            tot++;
        }
        ctr++;
        ret=max(ret,tot);
    }
    return ret;
}

int main() {
    int q;
    cin>>n>>m>>q;
    memset(a,0,sizeof(a));
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        ans[i]=helper(i);
    }
    int x,y;
    int out=0;
    while(q--){
        cin>>x>>y;
        x--;y--;
        a[x][y]=1-a[x][y];
        ans[x]=helper(x);
        out=0;
        for(int i=0;i<n;i++){
            out=max(out,ans[i]);
        }
        cout<<out<<"\n";
    }
    return 0;
}