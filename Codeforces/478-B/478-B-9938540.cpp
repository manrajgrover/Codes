/*
*	By manrajsingh
*	Do not copy -_-
*	Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define test
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	ll n,m;
	cin>>n>>m;
	ll max=((n-m)*(n-m+1))/2;
	ll min=(m-n%m)*((n/m)*((n/m)-1))/2+((n%m)*(n/m+1)*(n/m))/2;
	cout<<min<<" "<<max<<endl;
	return 0;
}