#include <bits/stdc++.h>
using namespace std;

int a[100];

int main() {
    int k;
    string s;
    cin>>s;
    cin>>k;
    int max=-1;
    for(int i=0;i<26;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    int score=0;
    for(int i=0;i<s.length();i++){
        score=score+(a[s[i]-'a'])*(i+1);
    }
    for(int i=s.length();i<s.length()+k;i++){
        score=score+(max)*(i+1);
    }
    cout<<score;
    return 0;
}