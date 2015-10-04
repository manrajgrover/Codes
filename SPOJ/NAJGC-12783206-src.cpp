#include <iostream>
using namespace std;

long long gcd(long long x, long long y){
    if (y == 0) {
        return x;
    } else 
        return gcd(y,(x%y));
}

int main() {
	long long t,num,den,x1,x2,y1,y2,x=0,d;
	scanf("%lld",&t);
	while(t--){
		x++;
		scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
		num= (x1)*(x2+1)+(y1)*(y2+1);
		den=(x1+y1)*(x2+y2+1);
		d=gcd(num,den);
		if(x1==0&&y1==0){
			printf("Case %lld: 0\n",x);
		}
		else if(d==0 || d==1){
			printf("Case %lld: %lld/%lld\n",x,num,den);
		}
		else{
			num=(num)/(d);
			den=(den)/(d);
			printf("Case %lld: %lld/%lld\n",x,num,den);
		}
	}
	return 0;
}