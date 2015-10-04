#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long p=sqrt(n),i=sqrt(n),j=0;
		while(j<=n){
			if(j*j>n){
				cout<<"No"<<endl;
				break;
			}
			if(i*i + j*j==n){
				cout<<"Yes"<<endl;
				break;
			}
			if((i*i + j*j)<n){
				j++;	
			}
			else{
				i--;
			}
		}
	}
	return 0;
}