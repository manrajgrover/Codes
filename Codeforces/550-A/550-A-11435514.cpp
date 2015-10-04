#include <bits/stdc++.h>
using namespace std;

bool f(string n,char a,char b){
    int f=0,i;
    for(i=1;i<n.length();i++){
        if(n[i]==a && n[i-1]==b){
            f=1;
            break;
        }
    }
    if(f==0){
        return false;
    }
    f=0;
    for(int j=i+2;j<n.length();j++){
        if(n[j]==b && n[j-1]==a){
            f=1;
            break;
        }
    }
    if(f==0){
        return false;
    }
    return true;
}

int main() {
    int i;
    string n;
    cin>>n;
    string x=n;
    reverse(n.begin(),n.end());
    if(f(n,'A','B')||f(x,'B','A')){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}