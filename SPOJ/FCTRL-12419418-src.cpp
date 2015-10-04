#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,n,i,total,s;
	cin>>t;
	while(t--){
		cin>>n;
		i=1;
		total=0;
		while(s=floor(n/pow(5,i))){
			total=total+s;
			i++;
		}
		cout<<total<<endl;
	}
	return 0;
}