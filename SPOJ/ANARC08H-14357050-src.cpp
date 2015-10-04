#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	while(1){
		int n,d;
		cin>>n>>d;
		if(n==0&&d==0){
			break;
		}
		int i=1,w=0;
		for(int x=i;x<=n;x++,i++){
			w=(w+d-1)%i+1;
		}
		cout<<n<<" "<<d<<" "<<w<<"\n";
	}
	return 0;
}