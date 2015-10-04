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
		if(n==1){
			cout<<"-1\n";
			continue;
		}
		int maxi=-1;
		for(int i=1;i<n;i++){
			if(a[i-1]<a[i]){
				maxi=i-1;
			}
		}
		if(maxi==-1){
			cout<<"-1\n";
			continue;
		}
		int maxj=-1;
		for(int i=0;i<n;i++){
			if(a[i]>a[maxi]&&i>maxi){
				maxj=i;
			}
		}
		swap(a[maxj],a[maxi]);
		sort(a+maxi+1,a+n);
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<"\n";
	}
	return 0;
}