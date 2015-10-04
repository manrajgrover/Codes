#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a[55],b;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	b=a[n-1]-a[0];
	for(int i=1;i<=m-n;++i){
		b=min(b,a[i+n-1]-a[i]);
	}
	printf("%d\n",b);
	return 0;
}