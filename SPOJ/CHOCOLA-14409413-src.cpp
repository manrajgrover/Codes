#include <bits/stdc++.h>
using namespace std;
#define ll long long

int x[1005],y[1005];

bool comp(int &a,int &b){
	return a>b;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m>>n;
		for(int i=0;i<m-1;i++){
			cin>>x[i];
		}
		for(int i=0;i<n-1;i++){
			cin>>y[i];
		}
		sort(x,x+m-1,comp);
		sort(y,y+n-1,comp);
		int xx=0,yy=0,xm=1,ym=1;
		int sum=0;
		while(xx<m-1||yy<n-1){
			if(yy==n-1||(xx<m-1&&x[xx]>y[yy])){
				ym++;
				sum+=(xm*x[xx]);
				xx++;
			}
			else{
				xm++;
				sum+=(ym*y[yy]);
				yy++;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}