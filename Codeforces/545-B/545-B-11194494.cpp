#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,t,f;
    int cx=0,cy=0;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        if(s[i]==t[i]){
            f+=s[i];
            continue;
        }
        if(cx<cy){
            f+=s[i];
            cx++;
        }
        else{
            f+=t[i];
            cy++;
        }
    }
    if(cx==cy){
        cout<<f;
    }
    else{
        cout<<"impossible";
    }
    return 0;
}