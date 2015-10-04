#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void) {
	long n,sum;
	while(cin>>n){
		sum=0;
		if(n==0){
			break;
		}
		for(long i=1;i<=n;i++){
			sum=sum+i*i;
		}
		cout<<sum<<endl;
	}
	return 0;
}