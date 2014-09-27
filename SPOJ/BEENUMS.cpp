#include <iostream>
using namespace std;

int main() {
	long long n,flag,a,i;
	while(cin>>n){
		if(n==-1){
			break;
		}
		a=1;
		if(a==n){
			cout<<"Y"<<endl;
		}
		else{
			i=1;
			flag=0;
			while(a<n){
				a+=6*i;
				if(a==n){
					cout<<"Y"<<endl;
					flag=1;
				}
				else{
					i++;
				}
			}
			if(flag==0){
				cout<<"N"<<endl;
			}
		}
	}
	return 0;
}
