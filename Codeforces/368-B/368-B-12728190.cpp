#include <bits/stdc++.h>
using namespace std;
#define ll long long

int visited[100005];
int a[100005];
int sum[100005];
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    memset(visited,0,sizeof(visited));
    sum[n-1]=1;
    visited[a[n-1]]=1;
    for(int i=n-2;i>=0;i--){
        if(!visited[a[i]]){
            sum[i]=sum[i+1]+1;
            visited[a[i]]=1;
        }
        else{
            sum[i]=sum[i+1];
        }
    }
    int x;
    for(int i=0;i<m;i++){
        cin>>x;x--;
        cout<<sum[x]<<"\n";
    }
    return 0;
}