/*
*	By manrajsingh
*	Do not copy -_-
*	Question: A 2
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
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int l=s.length();
		if(l<=10){
			cout<<s<<endl;
		}
		else{
			cout<<s[0]<<l-2<<s[l-1]<<endl;
		}
	}
	return 0;
}