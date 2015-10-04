#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		vector<int> v;
		int n,x;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		int flag=1,i=1,j=1,ctr=1;
		while(flag==1){
			if(v[n/2+i]==v[n/2]){
				ctr++;
				i++;
			}
			else if (v[n/2-j] == v[n/2]){
				ctr++;
				j++;
			}
			else {
				flag=0;
			}
		}
		if(ctr>n/2){
			printf("YES %d\n",v[n/2]);
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}