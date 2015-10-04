#include <iostream>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	if(n==m){
		cout<<"0\n";
	}
	else if(n>m){
		cout<<n-m<<endl;
	}
	else{
		int ctr=0;
		while(n!=m){
			if(m%2==0&&n<m){
				m/=2;
				ctr++;
			}
			else{
				m+=1;
				ctr++;
			}
		}
		cout<<ctr<<endl;
	}
	return 0;
}