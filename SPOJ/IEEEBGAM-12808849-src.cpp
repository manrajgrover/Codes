#include <iostream>
using namespace std;

int main() {
	int t;
	double n;
	scanf("%d",&t);
	while(t--){
		scanf("%lf",&n);
		printf("%.8f\n",n/(n+1));
	}
	return 0;
}