// By manrajsingh
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x){cout<<#x<<" = "<<x<< endl;}

int a[1005];

int main(){
    int n;
    scanf("%d",&n);
    int ans=-1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==1){
            printf("-1\n");
            return 0;
        }
    }
    sort(a,a+n);
    printf("1\n");
    return 0;
}