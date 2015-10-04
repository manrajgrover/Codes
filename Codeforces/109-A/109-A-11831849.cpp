#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,f=0;
    cin>>n;
    if(n<4){
        cout<<"-1";
        return 0;
    }
    string ans;
    while(n){
        if(n%7==0){
            while(n){
                ans+="7";
                n=n-7;
            }
        }
        else if((n-4)%7==0){
            ans+="4";
            n=n-4;
        }
        else if((n-7)%4==0){
            ans+="7";
            n=n-7;
        }
        else{
            ans+="4";
            n=n-4;
        }
        if((n>0&&n<4)||(n<0)){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"-1";
        return 0;
    }
    sort(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}