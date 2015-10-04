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

int a[105];

int main(){
	ios_base::sync_with_stdio(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	string s;
	cin>>s;
	int l=s.length(),j=0;
	for(int i=0;i<l;i++){
		if(s[i]=='+'){
			continue;
		}
		a[j++]=s[i]-'0';
	}
	sort(a,a+j);
	for(int i=0;i<j-1;i++){
		cout<<a[i]<<'+';
	}
	cout<<a[j-1];
	return 0;
}