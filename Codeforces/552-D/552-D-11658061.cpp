#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
    int a,b;
}p[2005];

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&p[i].a,&p[i].b);
    }
    ll ctr=0;
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if((p[k].b*(p[i].a-p[j].a)+p[j].b*(p[k].a-p[i].a)+p[i].b*(p[j].a-p[k].a))!=0){
                    ctr++;
                }
            }
        }
    }
    cout<<ctr;
    return 0;
}