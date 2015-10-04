#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<-1;
        return 0;
    }
    sort(a,a+n);
    if(n==2){
        int diff=a[1]-a[0];
        if(a[1]==a[0]){
            cout<<1<<endl;
            cout<<a[1];
            return 0;
        }
        if((a[0]+a[1])%2==0){
            cout<<"3"<<endl;
            cout<<a[0]-diff<<" "<<(a[0]+a[1])/2<<" "<<a[1]+diff;
            return 0;
        }
        cout<<"2"<<endl;
        cout<<a[0]-diff<<" "<<a[1]+diff;
        return 0;
    }
    int f=0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            f=1;
            continue;
        }
        else if(f==1){
            cout<<0;
            return 0;
        }
    }
    if(a[1]==a[0]){
        cout<<"1"<<endl;
        cout<<a[0];
        return 0;
    }
    int diff=a[1]-a[0];
    if(n>2){
        diff=min(a[2]-a[1],diff);
    }
    int x,o=0;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]==diff){
            continue;
        }
        if(a[i]-a[i-1]!=diff){
            o++;
            x=i;
        }
        if(a[i]-a[i-1]!=2*diff){
            cout<<0;
            return 0;
        }
    }
    if(o>1){
        cout<<0;
        return 0;
    }
    if(o==0){
        cout<<2<<endl<<a[0]-diff<<" "<<a[n-1]+diff;
        return 0;
    }
    cout<<1<<endl<<a[x]-diff;
    return 0;
}