#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin>>n;
    vector<int> ans;
    while(n){
        int temp=n,an=0,add=1;
        while(temp){
            if(temp%10){
                an+=add;
            }
            temp=temp/10;
            add=add*10;
        }
        ans.push_back(an);
        n=n-an;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}