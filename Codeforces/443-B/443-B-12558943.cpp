#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    string s;
    int k;
    cin>>s>>k;
    for(int i=0;i<k;i++){
        s+="?";
    }
    int max=0;
    int l=s.length();
    for(int i=1;i<=l;i++){
        for(int j=0;j<=l-i;j++){
            string t=s.substr(j,i);
            int a=t.length();
            if(a%2!=0){
                continue;
            }
            a=a/2;
            int f=0;
            //cout<<t<<" "<<a<<endl;
            for(int k=0;k<a;k++){
                if((t[k]==t[k+a])||(t[k]=='?')||(t[k+a]=='?')){
                    continue;
                }
                else{
                    f=1;
                    break;
                }
            }
            if((f==0)&&t.length()>max){
                max=t.length();
            }
        }
    }
    cout<<max<<endl;
    return 0;
}