#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long j(long n,long k)
{
    long a=1,i;
    for(i=1;i<=n;i++)
        a=(a+k-1)%i+1;
    return a;
}

int main() {
	long n,d,ans;
	vector<long> v;
	while(cin>>n>>d){
		if(n==0 && d==0){
			break;
		}
		ans=j(n,d);
		/*for(long i=0;i<n;i++){
			v.push_back(i+1);
		}
		long x=n;
		long i=0;
		while(x!=1){
			i=i+d-1;
			if(i>=x){
				i=i%x;
			}
			v.erase(v.begin()+i);
			x--;
		}*/
		cout<<n<<" "<<d<<" "<<ans<<endl;
		v.clear();
	}
	return 0;
}