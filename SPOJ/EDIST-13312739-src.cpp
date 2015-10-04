#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long T[2005][2005];

long long min(long long a,long long b){
	return a>b?b:a;
}


long long edit(string a,string b){
	long long m,n,left,top,corner,cost=0;
	m=a.length()+1;
	n=b.length()+1;
	for(long i=0;i<m;i++){
		for(long j=0;j<n;j++){
			T[i][j]=-1;
		}
	}
	for(long i=0;i<m;i++){
		T[i][0]=i;
	}
	for(long j=0;j<n;j++){
		T[0][j]=j;
	}
	for(long i=1;i<m;i++){
		for(long j=1;j<n;j++){
			left=T[i][j-1]+1;
			top=T[i-1][j]+1;
			corner=T[i-1][j-1]+(a[i-1]!=b[j-1]);
			T[i][j]=min(min(left,top),corner);
		}
	}
	cost=T[m-1][n-1];
	return cost;
}

int main() {
	long t;
	string a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<edit(a,b)<<endl;
	}
	return 0;
}
