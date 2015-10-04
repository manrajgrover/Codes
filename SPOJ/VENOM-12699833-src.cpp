#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long int read_int(){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start){
			continue;
		}
		if((r-'0'<0 || r-'0'>9) && r!='-' && start){
			break;
		}
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';
	}
	if(!neg)
		return ret;
	else
		return -ret;
}

int main() {
	ll t,h,p,a,n;
	double y,z,d;
	t=read_int();
	while(t--){
		h=read_int();
		p=read_int();
		a=read_int();
		if(h<=p)
        {
            printf("1\n");
            continue;
        }
        n=y=z=d=0;
		y= p - 2*a;
        z= 2*(a-h);
        d= sqrt(y*y - 4*p*z);
        n = ceil((-1*y + d)/(2*p));
        n=n+n-1;
		printf("%lld\n",n);
	}
	return 0;
}