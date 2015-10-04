/*
*	By manrajsingh
*	Do not copy -_-
*	Question:
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

vector<string> ones={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
vector<string> tens={"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
vector<string> sp= {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin>>n;
	if(10<=n && n<= 19){
    	cout<<sp[n - 10];
    	return 0;
	}
	if(n<10){
		cout<<ones[n];
		return 0;
	}
	else if(n%10==0){
		cout<<tens[n/10-2];
		return 0;
	}
	else{
		cout<<tens[n/10-2]<<"-"<<ones[n%10];
		return 0;
	}
	return 0;
}