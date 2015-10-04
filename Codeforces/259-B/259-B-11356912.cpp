#include <bits/stdc++.h>
using namespace std;

int a[3][3];

int main() {
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int x=a[0][2]+a[2][0]+(a[1][0]+a[1][2])/2;
    a[0][0]=x-a[0][1]-a[0][2];
    a[1][1]=x-a[1][0]-a[1][2];
    a[2][2]=x-a[2][0]-a[2][1];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}