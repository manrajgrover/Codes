/*
*	By manrajsingh
*	Do not copy -_-
*	Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int a[1005];

int main(){
	ios_base::sync_with_stdio(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=0;i<=m;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<m;i++){
		if(__builtin_popcount(a[i]^a[m])<=k){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}