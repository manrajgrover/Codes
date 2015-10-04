#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t,x=0;
	scanf("%lld",&t);
	while(t--){
		x++;
		stack<char> s;
		char w[200000];
		cin>>w;
		long long i=0,l=strlen(w),f;
		while(i<l){
			s.push(w[i]);
			if(s.size()>=3){
				int p=s.top()-'0';
				s.pop();
				int q=s.top()-'0';
				s.pop();
				int r=s.top()-'0';
				s.pop();
				if(p==0 &&q==0 &&r==1){
					i++;
					continue;
				}
				else{
					s.push(r+'0');
					s.push(q+'0');
					s.push(p+'0');
				}
			}
			i++;
		}
		if(s.empty()){
			printf("Case %lld: yes\n",x);
		}
		else{
			printf("Case %lld: no\n",x);
		}
	}
	return 0;
}