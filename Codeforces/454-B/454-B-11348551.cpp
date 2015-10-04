#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main() {
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    int f=0;
    for(int i=1;i<n;i++){
        if(v[i-1]<=v[i]){
            continue;
        }
        else{
            f=1;
        }
    }
    if(f==0){
        cout<<"0";
        return 0;
    }
    if(v[0]<v[n-1]){
        cout<<"-1";
        return 0;
    }
    int k=0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            k=i;
            break;
        }
    }
    f=0;
    for(int i=k+1;i<n;i++){
        if(v[i-1]>v[i]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"-1";
        return 0;
    }
    else{
        cout<<n-k;
    }
    return 0;
}