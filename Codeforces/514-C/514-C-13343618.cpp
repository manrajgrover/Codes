// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

vector<string> v[600005];
map<string,int> maa;
int main() {
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v[s.size()].push_back(s);
    }
    while(m--){
        cin>>s;
        if(v[s.size()].size()==0){
            puts("NO");
        }
        else if(maa[s]==1){
            puts("YES");
        }
        else if(maa[s]==2){
            puts("NO");
        }
        else{
            int len=s.size();
            int l=v[len].size();
            int mis;
            for(int i=0;i<l;i++){
                mis=0;
                for(int j=0;j<len;j++){
                    if(s[j]!=v[len][i][j]){
                        mis++;
                    }
                    if(mis>1){
                        break;
                    }
                }
                if(mis==1){
                    puts("YES");
                    maa[s]=1;
                    break;
                }
            }
            if(mis!=1){
                puts("NO");
                maa[s]=2;
            }
        }
    }
    return 0;
}