#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	long long s,count=0,j=0;
	long long Q[100005],N[100005];
	cin>>s;
	for(int i=0;i<s;i++){
		cin>>Q[i];
	}
	for(int i=0;i<s;i++){
		cin>>N[i];
	}
	stable_sort(Q,Q+s);
	stable_sort(N,N+s);
	for(int i=0;i<s;i++){
		if(Q[j]<N[i]){
			count++;
			j++;
		}
	}
	cout<<count;
	return 0;
}