#include <bits/stdc++.h>
using namespace std;

/*bool comp(const std::pair<int,int>& x, const std::pair<int,int>& y){
	if(x.second<y.second){
		return true;
  	}
  	else if(x.second==y.second&&x.first>y.first){
  		return true;
  	}
  	return false;
}*/

int visited[10005]={0};

int main() {
	int n,max=0,x,y;
	scanf("%d",&n);
	vector< pair<int,int> > v;
	for(int i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	long long total=0;
	int t;
	for(int i=v.size()-1;i>=0;i--){
		t=v[i].second;
		while(t){
			if(!visited[t]){
				visited[t]=1;
				total+=v[i].first;
				break;
			}
			else{
				t--;
			}
		}
	}
	printf("%lld\n",total);
	return 0;
}