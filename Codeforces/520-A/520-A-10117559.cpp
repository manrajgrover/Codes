#include <bits/stdc++.h>
using namespace std;

int a[30];

int main() {
	int n;
	string s;
	cin>>n;
	cin>>s;
	memset(a,0,sizeof(a));
	transform(s.begin(), s.end(),s.begin(), ::tolower);
	for(int i=0;i<s.length();i++){
		a[s[i]-'a']=1;
	}
	for(int i=0;i<26;i++){
		if(a[i]==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}