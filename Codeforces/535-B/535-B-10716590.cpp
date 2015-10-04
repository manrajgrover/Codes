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
	string s[1505];
	int sz=1,m=1;
	while(sz<=1500){
		for(int i=0;i<m&&sz+i<=1500;i++){
			s[sz+i]="4"+s[sz-m+i];
		}
		for(int i=0;i<m&&(sz+m+i)<=1500;i++){
			s[sz+m+i]="7"+s[sz-m+i];
		}
		m<<=1;
		sz+=m;
	}
	string n;
	cin>>n;
	for(int i=1;i<=1500;i++){
		if(s[i]==n){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}