#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];
ll dp_sort[100005];
ll dp_sum[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp_sum[0]=a[0];
    for(int i=1;i<n;i++){
        dp_sum[i]=dp_sum[i-1]+a[i];
    }
    sort(a,a+n);
    dp_sort[0]=a[0];
    for(int i=1;i<n;i++){
        dp_sort[i]=dp_sort[i-1]+a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y,c;
        cin>>c>>x>>y;
        x--;y--;
        if(c==1){
            if(x==0){
                cout<<dp_sum[y]<<"\n";
            }
            else{
                cout<<dp_sum[y]-dp_sum[x-1]<<"\n";
            }
        }
        else{
            if(x==0){
                cout<<dp_sort[y]<<"\n";
            }
            else{
                cout<<dp_sort[y]-dp_sort[x-1]<<"\n";
            }
        }
    }
    return 0;
}