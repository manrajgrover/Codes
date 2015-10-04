#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;
	string w=s;
	int flag=0;
	for(int i=s.length()-1;i>=0;i--){
		if(w[i]=='z'){
			w[i]='a';
		}
		else{
			w[i]=w[i]+1;
			if(s<w&&w<t){
				flag=1;
				break;
			}
		}
	}
	if(flag){
		cout<<w;
	}
	else{
		cout<<"No such string";
	}
	return 0;
}