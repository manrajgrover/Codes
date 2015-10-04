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
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	ll m,s;
	cin>>m>>s;
	if(s==0){
		if(m==1){
			cout<<"0 0\n";
		}
		else{
			cout<<"-1 -1\n";
		}
		return 0;
	}
	string s1;
	for(int i=0;i<m;i++){
		if(s>9){
			s1+='9';
			s-=9;
		}
		else{
			s1+=char(s+'0');
			s=0;
		}
	}
	if(s>0){
		cout<<"-1 -1\n";
		return 0;
	}
	string s2=s1;
	int find=0;
	reverse(s2.begin(),s2.end());
	if(s2[0]=='0'){
		for(int x=0;x<m;x++){
			if(s2[x]!='0'){
				find=x;
				break;
			}
		}
		s2[0]++;
		s2[find]--;
	}
	cout<<s2<<" "<<s1<<endl;
	return 0;
}