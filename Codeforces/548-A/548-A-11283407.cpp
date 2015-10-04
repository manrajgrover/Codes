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
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
    int n;
    string s;
    cin>>s>>n;
    int l=s.length();
    if(l%n==0){
        int c=0;
        int x=l/n,ctr=0;
        for(int i=0;i<n;i++){
            string sub=s.substr(ctr,x);
            string rev=sub;
            reverse(rev.begin(),rev.end());
            if(sub==rev){
                c++;
            }
            ctr=ctr+x;
        }
        if(c==n){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
    return 0;
}