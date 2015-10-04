/*
*   By manrajsingh
*   Do not copy -_-
*   Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}

queue<int> q1,q2;

int main(){
    ll n,k1,k2;
    cin>>n;
    cin>>k1;
    int x;
    for(ll i=0;i<k1;i++){
        cin>>x;
        q1.push(x);
    }
    cin>>k2;
    for(ll i=0;i<k2;i++){
        cin>>x;
        q2.push(x);
    }
    int r,s;
    ll ctr=0;
    while(k1!=0&&k2!=0&&ctr<10000005){
        ctr++;
        r=q1.front();
        s=q2.front();
        q1.pop();
        q2.pop();
        if(r>s){
            q1.push(s);
            q1.push(r);
            k2--;
            k1++;
        }
        else{
            q2.push(r);
            q2.push(s);
            k2++;
            k1--;
        }
    }
    if(k1==0){
        cout<<ctr<<" "<<2;
    }
    else if(k2==0){
        cout<<ctr<<" "<<1;
    }
    else{
        cout<<-1;
    }
    return 0;
}