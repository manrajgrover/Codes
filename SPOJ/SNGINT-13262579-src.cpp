#include <iostream>
using namespace std;

long long calc(long long n,long long div){
	if(div==1){
		return -1;
	}
	if(n%div==0&&n/div>1){
		return div+calc(n/div,div)*10;
   	}
   	else if(n%div==0&&n/div==1){
		return n;
   	}
   	else{
   		return calc(n,div-1);
   	}
}

int main() {
	long long t,n;
	cin>>t;
	while(t--){
		cin>>n;
		if(n==0){
			cout<<"10"<<endl;
			continue;
		}
		n=calc(n,9);
		if(n<0){
			cout<<"-1"<<endl;
		}
		else{
			cout<<n<<endl;
		}
	}
	return 0;
}