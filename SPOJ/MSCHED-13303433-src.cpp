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

inline void read_int(int &x) {
    register int c = getchar_unlocked();
    x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        x = -x;
}

int visited[10005]={0};

int main() {
	int n,max=0,x,y;
	read_int(n);
	//scanf("%d",&n);
	vector< pair<int,int> > v;
	for(int i=0;i<n;i++){
		read_int(x);
		read_int(y);
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