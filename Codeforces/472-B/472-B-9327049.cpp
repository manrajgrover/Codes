//By manrajsingh
#include <bits/stdc++.h>
using namespace std;

int a[2005];

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int time=0;
	for(int i=n-1;i>=0;i=i-k){
		time+=2*(a[i]-1);
	}
	printf("%d\n",time);
	return 0;
}