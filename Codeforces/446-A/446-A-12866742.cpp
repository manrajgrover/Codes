#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[100005];
int l[100005],r[100005];
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<=2){
        cout<<n;
        return 0;
    }
    int ans=2;
    int st=0;int en=0;
    bool f=false;
    l[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            l[i]=l[i-1]+1;
        }
        else{
            l[i]=1;
        }
        ans=max(ans,l[i-1]+1);
    }
    r[n-1]=1;
    for(int i=n-1;i>=0;i--){
        if(a[i]<a[i+1]){
            r[i]=r[i+1]+1;
        }
        else{
            r[i]=1;
        }
        ans=max(ans,r[i+1]+1);
    }
    for(int i=1;i<n;i++){
        if(a[i+1]-a[i-1]>=2){
            ans=max(ans,l[i-1]+r[i+1]+1);
        }
    }
    cout<<ans;
    return 0;
}