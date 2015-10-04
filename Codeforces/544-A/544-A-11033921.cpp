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

int a[300];
vector<string> v;
vector< pair<int,int> > d;

int main(){
	int k;
	string s;
	cin>>k;
	cin>>s;
	if(k>s.length()){
		cout<<"NO";
		return 0;
	}
	if(k==1){
		cout<<"YES"<<endl;
		cout<<s;
		return 0;
	}
	int x=s.length()-1,ctr=0,st;
	memset(a,0,sizeof(a));
	a[s[0]-'a']=1;
	for(int i=s.length()-1;i>0;i--){
		if(ctr==k-1){
			break;
		}
		if(a[s[i]-'a']!=1){
			//cout<<i<<" "<<x<<endl;
			d.push_back(make_pair(i,x));
			x=i-1;
			a[s[i]-'a']=1;
			ctr++;
		}
	}
	ctr=0;
	for(int i=0;i<d.size();i++){
		if(ctr==k-1){
			break;
		}
		v.push_back(s.substr(d[i].first,d[i].second-d[i].first+1));
		//cout<<s.substr(d[i].first,d[i].second-d[i].first+1)<<endl;
		st=d[i].first;
		ctr++;
	}
	v.push_back(s.substr(0,st));
	ctr++;
	reverse(v.begin(),v.end());
	if(ctr==k){
		cout<<"YES"<<endl;
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
		}
	}
	else{
		cout<<"NO";
	}
	/*
	for(int i=0;i<k;i++){
		int st=x;
		for(int j=x;j<s.length();j++){
			if(ctr==k){
				break;
			}
			if(a[s[j]-'a']!=1){
				ctr++;
				v.push_back(s.substr(st,j));
				x=j;
			}
		}
	}
	if(ctr==k){
		cout<<"YES"<<endl;
		for(int i=0;i<k;i++){
			cout<<v[i]<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}*/
	return 0;
}