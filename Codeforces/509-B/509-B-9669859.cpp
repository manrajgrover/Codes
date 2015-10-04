#include <bits/stdc++.h>
using namespace std;

int a[105];

int main() {
	int n,k;
	cin>>n>>k;
	int min=INT_MAX,max=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	if(max-min>k){
		cout<<"NO\n";
	}
	else{
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			if(a[i]<=k){
				for(int j=1;j<=a[i];j++){
					cout<<j<<" ";
				}
				cout<<'\n';
			}
			else{
				int ctr=0;
				while(ctr<a[i]){
					for(int j=1;j<=k;j++){
						if(ctr>=a[i]){
							break;
						}
						cout<<j<<" ";
						ctr++;
					}
				}
				cout<<'\n';
			}
		}
	}
	return 0;
}