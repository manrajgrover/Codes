// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int main() {
    int n,m;
    cin>>n>>m;
    vector<string> v;
    string x,y;
    for(int i=0;i<m;i++){
        if(i%2==0){
            x+="B";
        }
        else{
            x+="W";
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            y+="W";
        }
        else{
            y+="B";
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            v.push_back(x);
        }
        else{
            v.push_back(y);
        }
    }
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=0;j<m;j++){
            if(x[j]=='-'){
                v[i][j]='-';
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}