#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	while(1){
		string s;
		int n=0,ten,one,z;
		cin>>s;
		ten=s[0]-'0';
		one=s[1]-'0';
		z=s[3]-'0';
		//cout<<ten<<" "<<one<<" "<<z<<endl;
		if(ten==0){
			n=one;
			for(int i=0;i<z;i++){
				n=n*10;
			}
		}
		else{
			n=ten*10+one;
			for(int i=0;i<z;i++){
				n=n*10;
			}
		}
		if(n==0){
			break;
		}
		//cout<<log10(n)<<" "<<(int)(log10(n))<<endl;
		int c=1;
		while(c<=n){
			c<<=1;
		}
		int ans=((n-(c>>1))<<1)+1;
		printf("%d\n",ans);
	}
	return 0;
}