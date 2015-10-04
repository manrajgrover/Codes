#include <bits/stdc++.h>
using namespace std;

int a[105],s[105][105],m[105][105];

int main() {
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			m[i][i]=a[i];
		}
		int x=n;
		int total=0;
		for(int i=0;i<n;i++){
			s[i][i]=0;
		}
		for(int i=0;i<n;i++){
			total=m[i][i];
			for(int j=i+1;j<n;j++){
				total=total+a[j];
				m[i][j]=total%100;
			}
		}
		int j=0,p=1,min=0;
		while(x!=0){
			for(int i=0;i<x;i++){
				j=i+p;
				min=9999999;
				for(int k=i+1;k<=j;k++){
					if((s[i][k-1]+s[k][j]+m[i][k-1]*m[k][j])<min){
						min=s[i][k-1]+s[k][j]+m[i][k-1]*m[k][j];
					}
				}
				s[i][j]=min;
			}
			p++;
			x--;
		}
		printf("%d\n",s[0][n-1]);
	}
	return 0;
}