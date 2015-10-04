#include <bits/stdc++.h>
using namespace std;

int a[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=a[0]+1;
    int height=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            ans++;
            ans+=(a[i]-height);
        }
        else{
            ans++;
            ans+=(height-a[i]);
        }
        height=a[i];
        ans++;
    }
    cout<<ans;
    return 0;
}