#include <bits/stdc++.h>
using namespace std;

int a[15][15];

int main() {
	int n;
	cin>>n;
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		a[i][0]=a[0][i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n-1][n-1]<<endl;
	return 0;
}