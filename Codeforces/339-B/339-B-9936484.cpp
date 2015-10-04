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

ll a[100005];

int main(){
	ios_base::sync_with_stdio(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	ll n,m,cur=1,ans=0,x=1;
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		cin>>x;
		if(cur==x){
			ans+=0;
		}
		else{
			if(cur>x){
				ans+=(n-cur+x);
				cur=x;
			}
			else{
				ans+=(x-cur);
				cur=x;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}