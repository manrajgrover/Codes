#include <bits/stdc++.h>
using namespace std;

int a[105][105];

int main() {
    int n,x1,x2,y1,y2;
    memset(a,0,sizeof(a));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<=x2;j++){
            for(int k=y1;k<=y2;k++){
                a[j][k]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<105;i++){
        for(int j=0;j<105;j++){
            ans+=a[i][j];
        }
    }
    cout<<ans;
    return 0;
}