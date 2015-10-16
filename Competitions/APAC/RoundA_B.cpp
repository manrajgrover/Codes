// By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define d1(a)cout<<#a<<": "<<a<<"\n";
#define d2(a,b)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<"\n";
#define d3(a,b,c)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<"\n";
#define d4(a,b,c,d)cout<<#a<<": "<<a<<" , "<<#b<<": "<<b<<" , "<<#c<<": "<<c<<" , "<<#d<<": "<<d<<"\n";

int a[40][40];

int main() {
	int tc;
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	cin>>tc;
	for(int t=1;t<=tc;t++){
		int n;string move;
		cin>>n>>move;
		int ans[40][40];
		memset(ans,0,sizeof(ans));
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		if(move=="right"){
			for(int i=0;i<n;i++){
				int pos=n-1;
				stack<pair<int,bool>> s;
				s.push(make_pair(a[i][n-1],false));
				for(int j=n-2;j>=0;j--){
					if(a[i][j]==0){
						continue;
					}
					pair<int,bool> p = s.top();
					if(p.second==true){
						s.push(make_pair(a[i][j],false));
					}
					else if(p.second==false){
						if(p.first==a[i][j]){
							s.pop();
							s.push(make_pair(a[i][j]*2,true));
						}
						else{
							if(p.first==0){
								s.pop();
							}
							s.push(make_pair(a[i][j],false));
						}
					}
				}
				int ctr=n-s.size();
				while(!s.empty()){
					ans[i][ctr]=s.top().first;
					s.pop();
					ctr++;
				}
			}
		}
		else if(move=="up"){
			for(int i=0;i<n;i++){
				stack<pair<int,bool>> s;
				s.push(make_pair(a[0][i],false));
				for(int j=1;j<n;j++){
					if(a[j][i]==0){
						continue;
					}
					pair<int,bool> p = s.top();
					if(p.second==true){
						s.push(make_pair(a[j][i],false));
					}
					else if(p.second==false){
						if(p.first==a[j][i]){
							s.pop();
							s.push(make_pair(a[j][i]*2,true));
						}
						else{
							if(p.first==0){
								s.pop();
							}
							s.push(make_pair(a[j][i],false));
						}
					}
				}
				int ctr=s.size()-1;
				while(!s.empty()){
					ans[ctr][i]=s.top().first;
					s.pop();
					ctr--;
				}
			}
		}
		else if(move=="down"){
			for(int i=0;i<n;i++){
				int pos=n-1;
				stack<pair<int,bool>> s;
				s.push(make_pair(a[n-1][i],false));
				for(int j=n-2;j>=0;j--){
					if(a[j][i]==0){
						continue;
					}
					pair<int,bool> p = s.top();
					if(p.second==true){
						s.push(make_pair(a[j][i],false));
					}
					else if(p.second==false){
						if(p.first==a[j][i]){
							s.pop();
							s.push(make_pair(a[j][i]*2,true));
						}
						else{
							if(p.first==0){
								s.pop();
							}
							s.push(make_pair(a[j][i],false));
						}
					}
				}
				int ctr=n-s.size();
				while(!s.empty()){
					ans[ctr][i]=s.top().first;
					s.pop();
					ctr++;
				}
			}
		}
		else if(move=="left"){
			for(int i=0;i<n;i++){
				stack<pair<int,bool>> s;
				s.push(make_pair(a[i][0],false));
				for(int j=1;j<n;j++){
					if(a[i][j]==0){
						continue;
					}
					pair<int,bool> p = s.top();
					if(p.second==true){
						s.push(make_pair(a[i][j],false));
					}
					else if(p.second==false){
						if(p.first==a[i][j]){
							s.pop();
							s.push(make_pair(a[i][j]*2,true));
						}
						else{
							if(p.first==0){
								s.pop();
							}
							s.push(make_pair(a[i][j],false));
						}
					}
				}
				int ctr=s.size()-1;
				while(!s.empty()){
					ans[i][ctr]=s.top().first;
					s.pop();
					ctr--;
				}
			}
		}
		cout<<"Case #"<<t<<":\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<ans[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}

