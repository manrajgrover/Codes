#include <iostream>
using namespace std;

long long remzeroes(long long n){
	if(n%10){
		return n;
	}
	else{
		return remzeroes(n/10);
	}
}

int main() {
	long long t,num,e1,e2,e3;
	long double ul,ll;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&num);
		num=remzeroes(num);
		ll=num*0.95;
		ul=num*1.05;
		e1=num-(num%10);
		//cout<<e1<<" "<<ll<<" "<<ul<<" "<<num<<" "<<endl;
		if(e1>=ll && e1<=ul){
			printf("absurd\n");
			continue;
		}
		e2=e1+5;
		//cout<<e2<<" "<<e1<<" "<<ll<<" "<<ul<<" "<<num<<" "<<endl;
		if(e2>=ll && e2<=ul && e2!=num){
			printf("absurd\n");
			continue;
		}
		e3=e2+5;
		//cout<<e3<<" "<<e2<<" "<<e1<<" "<<ll<<" "<<ul<<" "<<num<<" "<<endl;
		if(e3>=ll && e3<=ul  && e3!=num){
			printf("absurd\n");
			continue;
		}
		else{
			printf("not absurd\n");
		}
	}
	return 0;
}