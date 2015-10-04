#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

ll a[100005],b[100005],c[100005];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,ctr=0;
	cin>>n>>m;
	while(n>0&&m>0&&(n+m)>=3){
		if(n>m){
			n-=2;
			m-=1;
		}
		else{
			n-=1;
			m-=2;
		}
		ctr++;
	}
	cout<<ctr<<endl;
	return 0;
}