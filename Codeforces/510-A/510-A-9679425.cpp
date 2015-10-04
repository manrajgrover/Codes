#include <bits/stdc++.h>
using namespace std;
#define ll long long

char a[55][55];

int main() {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i%2==0){
				a[i][j]='#';
			}
			else{
				if(i%2==1&&i%4==3&&j==0){
					a[i][j]='#';
					continue;
				}
				else if(i%2==1&&i%4==1&&j==m-1){
					a[i][j]='#';
					continue;
				}
				a[i][j]='.';
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}