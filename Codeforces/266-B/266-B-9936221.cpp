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
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	for(int j=0;j<t;j++){
		for(int i=1;i<n;i++){
			if(s[i]=='G'&&s[i-1]=='B'){
				s[i]='B';
				s[i-1]='G';
				i++;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}