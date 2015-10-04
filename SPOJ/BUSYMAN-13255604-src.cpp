// By manrajsingh
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
 
int read_i() { char c = gc(); while(c<'0' || c>'9') c = gc(); int ret = 0; while(c>='0' && c<='9') { ret = 10 * ret + c - 48; c = gc(); } return ret; } 
unsigned long long read_ll(){ int c; do c = fgetc(stdin); while((c<'0'||c>'9')&&c!= EOF); unsigned long long a = 0; while(c>='0'&&c<='9'){a = a*10+(c-'0');c = fgetc(stdin);}return a;}

struct sortp {
    bool operator()(const pair<int,int> &left, const pair<int,int> &right) {
        return left.second < right.second;
    }
};

int main(){
	ll t;
	t=read_ll();
	while(t--){
		ll n,x,y;
		n=read_ll();
        vector<pair< ll,ll> > v;
        for(ll i=0;i<n;i++){
            x=read_ll();
            y=read_ll();
            v.push_back(make_pair(x,y));
        }
        ll i=0,ctr=1;
        sort(v.begin(),v.end(),sortp());
        for(int j=1;j<n;j++){
            if(v[j].first>=v[i].second){
                ctr++;
                i=j;
            }
        }
        printf("%lld\n",ctr);
    }
    return 0;
}
 