#include <bits/stdc++.h>
using namespace std;

int c[100];

int main() {
    string s,t;
    cin>>s>>t;
    if(s.length()<t.length()){
        cout<<"need tree";
        return 0;
    }
    bool fau=false;
    int k=0;
    memset(c,0,sizeof(c));
    for(int i=0;i<s.length();i++){
        if(k<t.length()&&s[i]==t[k]){
            k++;
        }
        if(k==t.length()){
            fau=true;
        }
    }
    for(int i=0;i<s.length();i++){
        c[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i++){
        c[t[i]-'a']--;
    }
    bool far=true,l=true;
    for(int i=0;i<26;i++){
        if(c[i]==0&&far){
            far=true;
        }
        else{
            far=false;
        }
        if(c[i]>=0&&l){
            l=true;
        }
        else{
            l=false;
        }
    }
    if(fau){
        cout<<"automaton"<<endl;
    }
    else if(far){
        cout<<"array"<<endl;
    }
    else if(l){
        cout<<"both"<<endl;
    }
    else{
        cout<<"need tree"<<endl;
    }
    return 0;
}