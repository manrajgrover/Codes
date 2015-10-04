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
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		cin>>b[i];
	}
	for(int i=0;i<n-2;i++){
		cin>>c[i];
	}
	sort(a,a+n);
	sort(b,b+n-1);
	sort(c,c+n-2);
	for(int i=0;i<n;i++){
		if(a[i]==b[i]){
			continue;
		}
		else{
			cout<<a[i]<<endl;
			break;
		}
	}
	for(int i=0;i<n-1;i++){
		if(b[i]==c[i]){
			continue;
		}
		else{
			cout<<b[i]<<endl;
			break;
		}
	}
	return 0;
}