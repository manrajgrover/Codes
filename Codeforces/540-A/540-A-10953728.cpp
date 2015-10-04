#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2;
	int n,ans=0;
	cin>>n;
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
		int a=abs(s1[i]-s2[i]);
		int b=10-abs(s1[i]-s2[i]);
		ans+=min(a,b);
	}
	cout<<ans;
	return 0;
}