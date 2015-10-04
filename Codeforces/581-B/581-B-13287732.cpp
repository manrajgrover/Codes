#include <iostream>
using namespace std;

int a[100005];
int dp[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[n-1];
    dp[n-1]=0;
    int d;
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            dp[i]=0;
            max=a[i];
        }
        else{
            dp[i]=max-a[i]+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}