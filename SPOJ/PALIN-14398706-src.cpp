#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string s;
	scanf("%d",&t);
	while(t--){
		cin>>s;
		int f=1,l=s.length();
		for(int i=0;i<l;i++){
			if(s[i]!='9'){
				f=0;
				break;
			}
		}
		if(f==1){
			s[0]='1';
			for(int i=1;i<l;i++){
				s[i]='0';
			}
			s+='1';
			cout<<s<<'\n';
			continue;
		}
		f=0;
		for(int i=0;i<(l/2);i++){
			if(s[i]<s[l-1-i]){
				f=-1;
			}
			else if(s[i]>s[l-1-i]){
				f=1;
			}
			s[l-i-1]=s[i];
		}
		if(f==0||f==-1){
			int j=0,mid=0;
			if(l%2==0){
				mid=l/2-1;
			}
			else{
				mid=l/2;
			}
			while(s[mid-j]=='9'){
				s[mid-j]='0';
				s[l-1-mid+j]='0';
				j++;
			}
			s[mid-j]++;
			s[l-1-mid+j]=s[mid-j];
		}
		cout<<s<<'\n';
	}
	return 0;
}