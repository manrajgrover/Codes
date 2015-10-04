#include <iostream>
using namespace std;

int main() {
	long long n,sum=0,x=0,rowsum=0;
	scanf("%lld",&n);
	long long row[n],ans[n];
	if (n == 2) {
        printf("1 1");
        return 0;
    }
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&x);
			sum+=x;
			rowsum+=x;
		}
		row[i]=rowsum;
		rowsum=0;
	}
	sum=sum/(2*(n-1));
	for(int i=0;i<n;i++){
		ans[i]=(row[i]-sum)/(n-2);
	}
	for(int i=0;i<n;i++){
		printf("%lld ",ans[i]);
	}
	return 0;
}