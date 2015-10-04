// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int a[100005];

bool comp(const int &a,const int &b){
    int d1=a%10;
    if(d1<0){
        d1=d1+10;
    }
    int d2=b%10;
    if(d2<0){
        d2=d2+10;
    }
    if(d1>d2){
        return true;
    }
    return false;
}

int main() {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,comp);
    int r=0;
    for(int i=0;i<n;i++){
        if(a[i]<100){
            if(k-(10-(a[i]%10))>=0){
                k=k-(10-(a[i]%10));
                a[i]=a[i]+(10-(a[i]%10));
            }
        }
        if(k<=0){
            break;
        }
    }
    int ctr=0;
    while(k>0){
        if(r==n){
            r=r-n;
            ctr=0;
        }
        if(a[r]<100){
            if(k>10){
                a[r]+=10;
                k=k-10;
            }
            else{
                a[r]+=k;
                k=0;
                break;
            }
        }
        else{
            ctr++;
        }
        //d3(a[0],ctr,k);
        if(ctr==n){
            break;
        }
        r++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(a[i]/10);
    }
    cout<<ans;
    return 0;
}