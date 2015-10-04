#include <bits/stdc++.h>
using namespace std;

int x[105];

int main() {
    int n,a,b;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>x[i];
    }
    cin>>a>>b;
    int sum=0;
    for(int i=a;i<b;i++){
        sum+=x[i];
    }
    cout<<sum;
    return 0;
}