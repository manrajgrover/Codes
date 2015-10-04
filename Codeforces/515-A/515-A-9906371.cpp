#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll a,b,s,total;
	cin>>a>>b>>s;
	if(a<0){
		a=-a;
	}
	if(b<0){
		b=-b;
	}
	total=a+b;
	if(total<=s&&total%2==1&&s%2==1){
		cout<<"Yes"<<endl;
	}
	else if(total<=s&&total%2==0&&s%2==0){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}