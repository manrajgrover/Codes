#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime[10005],v[10005];
int r[5];

int sieve(){
	for(int i=2;i<100;i++){
		if(!prime[i]){
			for(int j=i*i;j<10000;j=j+i){
				prime[j]=true;
				//cout<<"lol"<<endl;
			}
			//cout<<"lol"<<endl;
		}
	}
	//cout<<"here"<<endl;
}

int bfs(int a,int b){
	if(a==b){
		return 0;
	}
	memset(v,0,sizeof(v));
	v[a]=1;
	queue< pair< int, int > > q;
	q.push(make_pair(a,0));
	//cout<<q.front().first<<endl;
	while(1){
		pair<int,int> p=q.front();
		//cout<<p.first<<" "<<p.second<<endl;
		q.pop();
		r[1]=p.first%10;
		r[2]=(p.first%100)/10;
		r[3]=(p.first%1000)/100;
		r[4]=(p.first%10000)/1000;
		for(int i=1;i<=4;i++){
			int x=p.first-r[i]*pow(10,i-1);
			for(int j=0;j<=9;j++){
				int new_x=x +j*pow(10,i-1);
				if(new_x==b){
					return p.second+1;
				}
				if(new_x<1000||v[new_x]==1||prime[new_x]==true){
					continue;
				}
				v[new_x]=1;
				pair<int,int> new_p;
				new_p.first=new_x;
				new_p.second=p.second+1;
				q.push(new_p);
			}
		}
	}
}

int main() {
	int t;
	//cout<<"herhwrnkjq	nk"<<endl;
	sieve();
	//cout<<"here123"<<endl;
	scanf("%d",&t);
	while(t--){
		int a,b;
		scanf("%d%d",&a,&b);
		long long d=bfs(a,b);
		cout<<d<<endl;
	}
	return 0;
}