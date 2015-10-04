#include <bits/stdc++.h>
using namespace std;

int a[10];
bool check[100005];

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a[i]);
		if(i>0){
			a[i]=a[i]+a[i-1];
		}
	}
	memset(check,false,sizeof(check));
	check[0]=true;
	for(int i=0;i<k;i++){
		for(int j=a[i];j<=n;j++){
			check[j]=check[j]|check[j-a[i]];
		}
	}
	if(check[n]){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}