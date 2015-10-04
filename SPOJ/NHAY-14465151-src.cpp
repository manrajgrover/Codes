#include <bits/stdc++.h>
using namespace std;

int lps[1000000],f;

void compute_lps(string pat,int m){
	int l=0,i=1;
	lps[0]=0;
	while(i<m){
		if(pat[i]==pat[l]){
			l++;
			lps[i]=l;
			i++;
		}
		else{
			if(l!=0){
				l=lps[l-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
}


void kmp_find(string pat, string s){
	int n=s.length(), m=pat.length(),j=0,i=0;
	compute_lps(pat,m);
	while(i<n){
		if(pat[j]==s[i]){
			i++;
			j++;
		}
		if(j==m){
			f=1;
			printf("%d\n",i-j);
			j=lps[j-1];
		}
		else if(i<n && pat[j]!=s[i]){
			if(j!=0){
				j=lps[j-1];
			}
			else{
				i++;
			}
		}
	}
}

int main() {
	int len;
	string pat,s;
	while(scanf("%d",&len)!=EOF){
		f=0;
		cin>>pat>>s;
		kmp_find(pat,s);
		if(f==0){
			printf("\n");
		}
	}
	return 0;
}