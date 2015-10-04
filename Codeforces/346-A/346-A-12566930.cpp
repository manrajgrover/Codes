#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main() {
    int n,y;
    cin>>n;
    cin>>y;
    int d=y,x;
    int max=y;
    for(int i=1;i<n;i++){
        cin>>x;
        d=gcd(d,x);
        if(max<x){
            max=x;
        }
    }
    //cout<<max<<endl;
    //cout<<d<<endl;
    int ans=((max/d)-n);
    if(ans%2==1){
        cout<<"Alice";
    }
    else{
        cout<<"Bob";
    }
    return 0;
}