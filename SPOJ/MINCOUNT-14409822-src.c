#include <stdio.h>
#define ull unsigned long long

int main(void) {
	ull t;
	scanf("%llu",&t);
	while(t--){
		ull h;
		scanf("%llu",&h);
		if(h==0||h==1){
			printf("0\n");
			continue;
		}
		double x=h/2.0;
		ull ans=(x)*(h+1)/3;
		printf("%llu\n",ans);
	}
	return 0;
}
