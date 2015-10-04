#include <iostream>
#include <bits/stdc++.h>
#define pr pair< long long,long long >

using namespace std;

int main() {
	long long t,x,y,n,l,p,f,count,d,i;
	cin>>t;
	while(t--){
		vector< pr > v;
		priority_queue< long long > Q;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>x>>y;
			v.push_back(make_pair(x,y));
			//cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		v.push_back(make_pair(0,0));
		cin>>l>>p;
		count=0;
		sort(v.begin(),v.end());
		for(i=v.size()-1;i>=0;i--){
			d=l-v[i].first;
			while(!Q.empty() && p<d){
				count++;
				p+=Q.top();
				Q.pop();
			}
			if(p<d){
				break;
			}
			Q.push(v[i].second);
		}
		if(i>=0){
			cout<<"-1"<<endl;
		}
		else{
			cout<<count<<endl;
		}
	}
	return 0;
}