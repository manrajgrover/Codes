#include <iostream>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c=0;
		scanf("%d%d",&a,&b);
		if(a<=0&&b>=0) c++;
		if(a<=1&&b>=1) c++;
		if(a<=2&&b>=2) c++;
		if(a<=3&&b>=3) c++;
		printf("%d\n",c);
	}
	return 0;
}