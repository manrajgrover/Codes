#include <iostream>
using namespace std;
 
int main() {
	long t,a[1000005],sum,n;
	cin>>t;
	while(t--){
		cin>>n;
		sum=0;
		for(long i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		if(sum%n==0){
			cout<<n<<endl;
		}
		else{
			cout<<n-1<<endl;
		}
	}
	return 0;
}