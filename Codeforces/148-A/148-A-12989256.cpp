// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int v[100005];

int main() {
    int a,b,c,d,e;
    memset(v,0,sizeof(v));
    cin>>a>>b>>c>>d>>e;
    int w=a;
    while(w<=e){
        v[w]=1;
        w=w+a;
    }
    w=b;
    while(w<=e){
        v[w]=1;
        w=w+b;
    }
    w=c;
    while(w<=e){
        v[w]=1;
        w=w+c;
    }
    w=d;
    while(w<=e){
        v[w]=1;
        w=w+d;
    }
    int ctr=0;
    for(int i=1;i<=e;i++){
        if(v[i]==1){
            ctr++;
        }
    }
    cout<<ctr;
    return 0;
}