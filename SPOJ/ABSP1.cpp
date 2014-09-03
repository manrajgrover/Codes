#include <iostream>
using namespace std;

int main() {
	int t,n;
	long i,sum,x,a[10004];
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		sum=0;
		x=-n+1;
		for(i=0;i<n;i++){
			if(n%2==0){
				sum+=x*a[i];
			}
			else{
				if(i==n+1/2){
					continue;
				}
				else{
					sum+=x*a[i];
				}
			}
			x=x+2;
		}
		cout<<sum<<endl;
	}
	return 0;
}