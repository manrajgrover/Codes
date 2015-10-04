#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	while(scanf("%lld",&t)==1){
		if(t==0){
			break;
		}
		printf("%.2lf\n",(pow(t/acos(-1.0),2)*acos(-1.0))/2);
	}
	return 0;
}