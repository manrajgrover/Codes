#include <iostream>
#include <bits/stdc++.h>
using namespace std;

char ch[10000][10000];

int main() {
	long n,x,p;
	string s;
	while(cin>>n && n!=0){
		cin>>s;
		p=s.length()/n;
		x=0;
		for(int i=0;i<p;i++){
			if(i%2==1){
				for(int j=n-1;j>=0;j--){
					ch[i][j]=s[x];
					x++;
					//cout<<"i is "<<i<<" j is "<<j<<" char is "<<ch[i][j]<<endl;
				}		
			}
			else {
				for(int j=0;j<n;j++){
					ch[i][j]=s[x];
					x++;
					//cout<<"i is "<<i<<" j is "<<j<<" char is "<<ch[i][j]<<endl;
				}		
			}
		}
		for(int j=0;j<n;j++){
			for(int i=0;i<p;i++){
				cout<<ch[i][j];
			}
		}
		cout<<endl;
	}
	return 0;
}