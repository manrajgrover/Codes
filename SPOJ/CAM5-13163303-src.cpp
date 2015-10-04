#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector< list < ll > > v(100005);
vector<bool> visited(100005,false);

inline unsigned long long read_f(){
    ll c;
    do
        c = fgetc(stdin);
    while ( (c < '0' || c > '9') && c != EOF );
    unsigned long long a = 0;
    while ( c >= '0' && c <= '9' ){
        a = a*10 + (c - '0');
        c = fgetc(stdin);
    }
    return a;
}

void dfs(ll elem){
	ll top;
	stack<ll> s;
	s.push(elem);
	while(s.empty()==false){
		top=s.top();
		s.pop();
		if(!visited[top]){
			visited[top]=true;
			for(list<ll>::iterator i=v[top].begin();i!=v[top].end();i++){
				s.push(*i);
			}
		}
	}
}

int main() {
	ll t;
	t=read_f();
	while(t--){
		for(ll i=0;i<100005;i++){v[i].clear();}
		fill(visited.begin(), visited.end(), false);
		ll n,e,a,b;
		n=read_f();
		e=read_f();
		//ll res=n;
		for(ll i=0;i<e;i++){
			a=read_f();
			b=read_f();
			//there[a]=true;
			//there[b]=true;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		ll ans=0;
		for(ll i=0;i<n;i++){
			if(!visited[i]){
				ans++;
				dfs(i);
			}
		}
		/*for(vector<list<ll>>::iterator it=v.begin();it!=v.end();it++){
			list<ll> li=*it;
			for(list<ll>::iterator i=li.begin();i!=li.end();i++){
				cout<<*i<<" ";
			}
			cout<<endl;
		}*/
		//vector<bool> visited(100005,false);
		
		printf("%lld\n",ans);
	}
	return 0;
}