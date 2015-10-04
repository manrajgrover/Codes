#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(0) ;
	string s;
	int n;
	cin>>n>>s;
	int ctr=0;
	while(s[ctr]=='.'){
		ctr++;
	}
	for(int i=0;i<n;i++){
		if(s[i]=='L'){
			cout<<ctr+1<<" "<<i<<endl;
			return 0;
		}
	}
	for(int i=n-1;i>=0;i--){
		if(s[i]=='R'){
			cout<<ctr+1<<" "<<i+2<<endl;
			return 0;
		}
	}
	
	return 0;
}