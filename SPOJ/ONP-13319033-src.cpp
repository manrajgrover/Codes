#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	scanf("%lld",&t);
	string s;
	stack<char> st;
	while(t--){
		cin>>s;
		ll l=s.length();
		for(ll i=0;i<l;i++){
			if(isalpha(s[i])){
				cout<<s[i];
			}
			else if(s[i]==')'){
				cout<<st.top();
				st.pop();
			}
			else if(s[i]!='('){
				st.push(s[i]);
			}
		}
		cout<<endl;
	}
	return 0;
}