#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

int main(void) {
	long long t,ans,x=0,n;
	t=read_int();
	while(t--){
		x+=1;
		n=read_int();
		ans=floor(sqrt(1+n))-1;
		printf("Case %lld: %lld\n",x,ans);
	}
	return 0;
}