#include <bits/stdc++.h>
using namespace std;

int a[105][105];
vector<int> v;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int flag=0,ctr=0;
    for(int i=0;i<n;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i][j]==1||a[i][j]==3){
                flag=1;
                break;
            }
        }
        if(flag==0){
            ctr++;
            v.push_back(i+1);
        }
    }
    cout<<ctr<<endl;
    if(ctr==0){
        return 0;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}