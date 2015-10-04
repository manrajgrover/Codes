/*
*	By manrajsingh
*	Do not copy -_-
*   Question: 507B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	double r,x1,x2,y1,y2;
	#ifdef local
	freopen("input.txt","r",stdin);
	#endif
	cin>>r>>x1>>y1>>x2>>y2;
	double d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	double ans=ceil(d/(2*r));
	cout<<ans<<endl;
	return 0;
}