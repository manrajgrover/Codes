#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,t;
	scanf("%lld",&t);
	string a="umank";
	while(t--){
		long long i=0;
		string s;
		scanf("%lld",&n);
		while(n>0){
			i=n%5;
			if(i==0){
				n=n/5-1;
			}
			else{
				n=n/5;
			}
			s=a[i]+s;
		}
		cout<<s<<endl;;
	}
	return 0;
}