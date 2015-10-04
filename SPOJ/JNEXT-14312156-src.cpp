#include <bits/stdc++.h>
using namespace std;

int a[1000005];

int main() {
	int t;
	int n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int f=next_permutation(a,a+n);
		if(f){
			for(int i=0;i<n;i++){
				cout<<a[i];
			}
		}
		else{
			cout<<"-1";
		}
		cout<<"\n";
	}
	return 0;
}