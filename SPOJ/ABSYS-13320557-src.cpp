//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	scanf("%lld",&t);
	while(t--){
		string s1,s2,s3;
		char c1,c2;
		int p1=0,p2=0,p3=0;
		cin>>s1>>c1>>s2>>c2>>s3;
		ll f1=s1.find("machula");
		if(f1!=string::npos){
			s1.erase(f1,7);
			p1=1;
		}
		f1=s2.find("machula");
		if(f1!=string::npos){
			s2.erase(f1,7);
			p2=1;
		}
		f1=s3.find("machula");
		if(f1!=string::npos){
			s3.erase(f1,7);
			p3=1;
		}
		if(p1==1){
			ll v1=atoi(s3.c_str());
			ll v2=atoi(s2.c_str());
			cout<<v1-v2<<" "<<c1<<" "<<v2<<" "<<c2<<" "<<v1<<endl; 
		}
		else if(p2==1){
			ll v1=atoi(s1.c_str());
			ll v2=atoi(s3.c_str());
			cout<<v1<<" "<<c1<<" "<<v2-v1<<" "<<c2<<" "<<v2<<endl; 
		}
		else{
			ll v1=atoi(s1.c_str());
			ll v2=atoi(s2.c_str());
			cout<<v1<<" "<<c1<<" "<<v2<<" "<<c2<<" "<<v1+v2<<endl; 
		}
	}
	return 0;
}