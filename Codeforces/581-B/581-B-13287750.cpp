#include <iostream>
using namespace std;

int a[100005];

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[n-1];
    a[n-1]=0;
    int d;
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            a[i]=0;
        }
        else{
            a[i]=max-a[i]+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}