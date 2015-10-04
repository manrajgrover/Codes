/*
*	By manrajsingh
*	Do not copy -_-
*   Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
	#ifdef test
	freopen("input.txt","r",stdin);
	#endif
	string s;
	int temp;
	cin>>s;
	temp=s[0]-'0';
	if(temp>4&&temp!=9){
		cout<<9-temp;
	}
	else{
		cout<<temp;
	}
	for(int i=1;i<s.length();i++){
		temp=s[i]-'0';
		if(temp>4){
			cout<<9-temp;
		}
		else{
			cout<<temp;
		}
	}
	cout<<endl;
	return 0;
}