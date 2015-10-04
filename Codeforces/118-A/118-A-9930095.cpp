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
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	string s;
	cin>>s;
	int l=s.length();
	for(int i=0;i<l;i++){
		char c=s[i];
		if(c>=65&&c<=90){
			c=c+32;
		}
		if(c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i'){
			continue;
		}
		cout<<"."<<c;
	}
	return 0;
}