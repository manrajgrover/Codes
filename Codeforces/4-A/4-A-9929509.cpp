/*
*	By manrajsingh
*	Do not copy -_-
*	Question: Ladder A 1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
	ios_base::sync_with_stdio(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	int n;
	cin>>n;
	if(n%2==0){
		if(n==2){
			cout<<"NO\n";
			return 0;
		}
		for(int i=2;i<n;i+=2){
			if(i%2==0&&(n-i)%2==0){
				cout<<"YES\n";
				return 0;
			}
		}
	}
	else{
		cout<<"NO\n";
	}
	return 0;
}