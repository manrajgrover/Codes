#include <bits/stdc++.h>
using namespace std;

int c[30];
char a[400][400];

int main() {
    int n,m,total=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string x="";
            x+=a[i][j];
            x+=a[i+1][j];
            x+=a[i+1][j+1];
            x+=a[i][j+1];
            sort(x.begin(),x.end());
            if(x=="acef"){
                total++;
            }
        }
    }
    cout<<total;
    return 0;
}