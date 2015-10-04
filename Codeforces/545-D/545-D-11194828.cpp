#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll ctr=1;
    ll time_t=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=time_t){
            time_t+=a[i];
            ctr++;
        }
    }
    cout<<ctr;
    return 0;
}