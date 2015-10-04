#include <iostream>
using namespace std;

bool w[1000005];

int main() {
	int k,l,m,x;
	scanf("%d %d %d",&k,&l,&m);
	w[0]=false;
	for(int i=1;i<=1000000;i++){
		w[i]=!w[i-1];
		if(i>=k && !w[i-k]){
			w[i]=true;
		}
		if(i>=l && !w[i-l]){
			w[i]=true;
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		if(w[x]){
			cout<<"A";
		}
		else{
			cout<<"B";
		}
	}
	return 0;
}