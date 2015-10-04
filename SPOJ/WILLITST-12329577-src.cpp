#include <iostream>
using namespace std;

int main() {
	unsigned long long t;
	cin>>t;
	while(t>1){
		if(t%2==0){
			t=t/2;
		}
		else{
			cout<<"NIE"<<endl;
			break;
		}
	}
	if(t==1){
		cout<<"TAK"<<endl;
	}
	return 0;
}