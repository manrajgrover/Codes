#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n,min1,min2,min3,max1,max2,max3;
    cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
    int ans1=min1,ans2=min2,ans3=min3;
    n=n-min1-min2-min3;
    for(int i=0;i<n;i++){
        if(ans1<max1){
            ans1++;
        }
        else if(ans2<max2){
            ans2++;
        }
        else{
            ans3++;
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3;
    return 0;
}