#include <iostream>
using namespace std;

int main() {
	long t,n,count;
	string a,b="lxh";
	cin>>t;
	while(t--){
		cin>>n;
		count=0;
		for(long long i=0;i<n;i++){
			cin>>a;
			if(b.compare(a)==0){
				count++;
			}
		}
		if(count%2==0){
			cout<<"hhb"<<endl;
		}
		else{
			cout<<"lxh"<<endl;
		}
	}
	return 0;
}