#include <iostream>
using namespace std;

int main() {
    string s;
    cin>>s;
    int l=s.length();
    string rem3ans;
    rem3ans+=s[0];
    rem3ans+=s[1];
    if(l<=2){
        cout<<s;
        return 0;
    }
    for(int i=2;i<l;i++){
        if(s[i]==s[i-1]&&s[i-1]==s[i-2]){
            continue;
        }
        else{
            rem3ans+=s[i];
        }
    }
    if(rem3ans.length()<3){
        cout<<rem3ans;
        return 0;
    }
    string ans=rem3ans.substr(0,2);
    //cout<<ans<<endl;
    int x=1;
    for(int i=2;i<rem3ans.length();i++){
        if(rem3ans[i]==ans[x]&&ans[x-1]==ans[x-2]){
            continue;
        }
        else{
            ans+=rem3ans[i];
            x++;
        }
        //cout<<ans<<endl;
    }
    cout<<ans;
    return 0;
}