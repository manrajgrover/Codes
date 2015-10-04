#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int l=s.length();
	if(l==1){
		if((s[0]-'0')%2==0){
			cout<<s<<endl;
			return 0;
		}
		else{
			cout<<"-1"<<endl;
			return 0;
		}
	}
	int f=0;
	for(int i=0;i<l;i++){
		if((s[i]-'0')%2==0){
			f=1;
			break;
		}
	}
	if(!f){
		cout<<"-1"<<endl;
		return 0;
	}
	f=-1;
	for(int i=l-1;i>=0;i--){
		if((s[i]-'0')%2==0&&(s[i]-'0')<(s[l-1]-'0')){
			f=i;
		}
	}
	char temp;
	if(f!=-1){
		temp=s[l-1];
		s[l-1]=s[f];
		s[f]=temp;
		cout<<s<<endl;
		return 0;
	}
	f=-1;
	for(int i=l-1;i>=0;i--){
		if((s[i]-'0')%2==0&&(s[i]-'0')>(s[l-1]-'0')){
			f=i;
			break;
		}
	}
	temp=s[l-1];
	s[l-1]=s[f];
	s[f]=temp;
	cout<<s<<endl;
	return 0;
}