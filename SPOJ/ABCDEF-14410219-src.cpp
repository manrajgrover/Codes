#include <bits/stdc++.h>
using namespace std;

vector<int> r,l;
int x[105];

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				l.push_back(x[i]*x[j]+x[k]);
			}
		}
	}
	sort(l.begin(),l.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				if(x[k]==0){
					continue;
				}
				r.push_back((x[i]+x[j])*x[k]);
			}
		}
	}
	sort(r.begin(),r.end());
	int s=l.size(),p,q;
	long long ctr=0;
	for(int i=0;i<s;i++){
		p=lower_bound(r.begin(),r.end(),l[i])-r.begin();
		q=upper_bound(r.begin(),r.end(),l[i])-r.begin();
		ctr+=(q-p);
	}
	printf("%lld\n",ctr);
	return 0;
}