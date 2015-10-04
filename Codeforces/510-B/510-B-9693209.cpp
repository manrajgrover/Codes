#include <bits/stdc++.h>
using namespace std;
#define ll long long

char a[55][55];
int visited[55][55],n,m;

int dfs(int i,int j,int ctr,int stx,int sty){
	if(i==stx&&j==sty&&ctr>=4&&visited[i][j]==1){
		return 1;
	}
	if(visited[i][j]==1){
		return 0;
	}
	int up=0,dn=0,lf=0,ri=0;
	visited[i][j]=1;
	if(i-1>=0&&a[i][j]==a[i-1][j]){
		up=dfs(i-1,j,ctr+1,stx,sty);
	}
	if(j-1>=0&&a[i][j]==a[i][j-1]){
		lf=dfs(i,j-1,ctr+1,stx,sty);
	}
	if(i+1<n&&a[i][j]==a[i+1][j]){
		dn=dfs(i+1,j,ctr+1,stx,sty);
	}
	if(j+1<m&&a[i][j]==a[i][j+1]){
		ri=dfs(i,j+1,ctr+1,stx,sty);
	}
	if(up||dn||lf||ri){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	cin>>n>>m;
	memset(visited,0,sizeof(visited));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(dfs(i,j,0,i,j)){
				cout<<"Yes\n";
				return 0;
			}
			memset(visited,0,sizeof(visited));
		}
	}
	cout<<"No\n";
	return 0;
}