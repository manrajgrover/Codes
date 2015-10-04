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

int main(){
	ios_base::sync_with_stdio(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	string p,q;
	cin>>p>>q;
	transform(p.begin(),p.end(),p.begin(),::tolower);
	transform(q.begin(),q.end(),q.begin(),::tolower);
	int l=p.length();
	for(int i=0;i<l;i++){
		if(p[i]==q[i]){
			continue;
		}
		else if(p[i]>q[i]){
			cout<<"1\n";
			return 0;
		}
		else{
			cout<<"-1\n";
			return 0;
		}
	}
	cout<<"0\n";
	return 0;
}