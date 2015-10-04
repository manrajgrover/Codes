#include <bits/stdc++.h>
using namespace std;

int main() {
    string s,m="CODEFORCES";
    cin>>s;
    int st=0;
    for(int i=0;i<m.length();i++){
        if(s[i]==m[st]){
            st++;
        }
        else{
            break;
        }
    }
    if(st==m.length()){
        cout<<"YES\n";
        return 0;
    }
    int en=m.length()-1,ctr=0;
    for(int i=s.length()-1;i>=0;i--){
        if(st+ctr==m.length()){
            //cout<<"Breaking"<<endl;
            break;
        }
        if(s[i]==m[en]){
            en--;
            ctr++;
        }
        else{
            break;
        }
    }
    if(en==-1||st+ctr==m.length()){
        cout<<"YES\n";
        return 0;
    }
    string d=s.substr(0,st)+s.substr(s.length()-ctr,ctr);
    if(d=="CODEFORCES"){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}