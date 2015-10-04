#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long t,req,n,x,q=1,count;
	long v[100003];
	cin>>t;
	while(t--){
		cin>>req;
		count=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		stable_sort(v,v+n);
		for(int i=n-1;i>=0;i--){
			if(req>0){
				req=req-v[i];
				count++;	
			}
		}
		if(req>0){
			cout<<"Scenario #"<<q<<":"<<endl;
			cout<<"impossible"<<endl;
		}
		else{
			cout<<"Scenario #"<<q<<":"<<endl;
			cout<<count<<endl;
		}
		q++;
		cout<<endl;
	}
	return 0;
}