#include <bits/stdc++.h>
using namespace std;

long long a[1005];
vector<long long> gt;

int main() {
	long long n,k,p,x,y;
	long long sum=0;
	cin>>n>>k>>p>>x>>y;
	for(int i=0;i<k;i++){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum>x||sum+(n-k)> x){
		cout<<"-1";
		return 0;
	}
	sort(a,a+k);
	if(p<y){
		cout<<"-1"<<endl;
		return 0;
	}
	for(int i=k;i<n;i++){
		if(i%2==0){
			if(a[(i/2)-1]>=y){
				a[i]=1;
				gt.push_back(1);
			}
			else{
				a[i]=y;
				gt.push_back(y);
			}
		}
		else{
			if(a[(i/2)]>=y){
				a[i]=1;
				gt.push_back(1);
			}
			else{
				a[i]=y;
				gt.push_back(y);
			}
		}
		sort(a,a+i+1);
	}
	sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum>x||a[n/2]<y){
		cout<<"-1";
		return 0;
	}
	for(int i=0;i<gt.size();i++){
		cout<<gt[i]<<" ";
	}
	return 0;
}