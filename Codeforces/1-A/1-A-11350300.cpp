#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,m,a;
    cin>>n>>m>>a;
    long long w,h;
    w=ceil((double)n/(double)a);
    h=ceil((double)m/(double)a);
    long long ans=w*h;
    cout<<ans;
    return 0;
}