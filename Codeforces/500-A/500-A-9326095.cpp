//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
 
int a[30006];
 
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int total=1;
	while(total<k){
		total+=a[total];
	}
	if(total==k){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}