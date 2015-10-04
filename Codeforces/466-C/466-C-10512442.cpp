/*
*	By manrajsingh
*	Do not copy -_-
*	Question: Ladder C 3
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

ll a[500005],cnt[500005];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	ll n, sum=0;
	memset(cnt,0,sizeof(cnt));
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%3!=0){
		cout<<"0\n";
	}
	else{
		sum=sum/3;
		ll ans=0,sumc=0;
		for(int i=n-1;i>=0;i--){
			sumc+=a[i];
			if(sumc==sum){
				cnt[i]=1;
			}
		}
		for(int i=n-2;i>=0;i--){
			cnt[i]+=cnt[i+1];
		}
		sumc=0;
		for(int i=0;i+2<n;i++){
			sumc+=a[i];
			if(sumc==sum){
				ans+=cnt[i+2];
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}