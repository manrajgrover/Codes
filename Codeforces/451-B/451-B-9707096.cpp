/*
*	By manrajsingh
*	Do not copy -_-
*   Question: 451B
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a[100005];

int main(){
	ll n;
	cin>>n;
	memset(a,0,sizeof(a));
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll x=0,found=0;
	while(a[x]<a[x+1]){
		x++;
	}
	if(x==n-1){
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
		return 0;
	}
	ll y=x;
	while(a[y]>a[y+1]){
		y++;
	}
	if(y==n){
		y--;
	}
	for(ll i=0;i<=(y-x)/2;i++){
		//cout<<"swapping... "<<a[x+i]<<" "<<a[y-i]<<endl;
		swap(a[x+i],a[y-i]);
	}
	/*for(ll i=0;i<n;i++){
		cout<<a[i]<<" ";
	}*/
	for(ll i=1;i<n;i++){
		//cout<<a[i]<<" "<<a[i+1]<<endl;
		if(a[i-1]<a[i]){
			continue;
		}
		else{
			found=1;
			break;
		}
	}
	if(found==1){
		cout<<"no"<<endl;
	}
	else{
		cout<<"yes"<<endl;
		cout<<x+1<<" "<<y+1<<endl;
	}
	return 0;
}