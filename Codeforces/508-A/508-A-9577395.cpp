#include <bits/stdc++.h>
using namespace std;
#define ll long long

int a[1005][1005];

int main() {
	int n,m,k,x,y;
	scanf("%d%d%d",&n,&m,&k);
	memset(a,0,sizeof(a));
	int ctr=0,f=0;
	for(int i=0;i<k;i++){
		scanf("%d%d",&x,&y);
		a[x][y]=1;
		ctr++;
		if(a[x-1][y+1]==1&&a[x-1][y]==1&&a[x][y]==1&&a[x][y+1]==1){
			f=1;
			break;
		}
		else if(a[x-1][y]==1&&a[x-1][y-1]==1&&a[x][y]==1&&a[x][y-1]==1){
			f=1;
			break;
		}
		else if(a[x][y-1]==1&&a[x+1][y-1]==1&&a[x][y]==1&&a[x+1][y]==1){
			f=1;
			break;
		}
		else if(a[x][y+1]==1&&a[x+1][y]==1&&a[x][y]==1&&a[x+1][y+1]==1){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("%d\n",ctr);
	}
	else{
		printf("0\n");
	}
	return 0;
}