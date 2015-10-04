#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	scanf("%d",&t);
	for(int d=1;d<=t;d++){
		ll n,m;
		scanf("%lld %lld",&n,&m);
		ll sum=1,i;
		for(i=2;i*i<n;i++){
			if(n%i==0){
				sum+=i+(n/i);
			}
		}
		//cout<<sum<<endl;
		if(i*i==n){
			sum+=i;
		}
		sum=sum%m;
		//cout<<sum<<endl;
		ll c=1;
		for(i=2;i*i<sum;i++){
			if(sum%i==0){
				c+=2;
			}
		}
		//cout<<c<<endl;
		if(i*i==sum){
			c++;
		}
		//cout<<c<<endl;
		ll x=(5*c*c+4),y=x-8;
		ll s1=sqrt(x),s2=sqrt(y);
		//cout<<c1<<" "<<c2<<" "<<s1<<" "<<s2<<endl;
		if(s1*s1==x||s2*s2==y){
			printf("Case #%d : YES.\n", d);
		}
		else{
			printf("Case #%d : NO.\n", d);
		}
	}
	return 0;
}