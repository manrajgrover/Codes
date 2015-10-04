#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	string s1,s2;
	int l1,l2,ctr1=0,ctr2=0;
	cin>>s1>>s2;
	l1=s1.length();
	l2=s2.length();
	for(int i=0;i<l1;i++){
		if(s1[i]=='1'){
			ctr1++;
		}
	}
	for(int i=0;i<l2;i++){
		if(s2[i]=='1'){
			ctr2++;
		}
	}
	if(ctr1%2==1){
		ctr1++;
	}
	if(ctr1>=ctr2){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}