#include <bits/stdc++.h>
using namespace std;
#define ll long long

int lcs[1005][1005],seg[1005][1005];
char s[1005],r[1005];

int main(){
	string s1,s2;
	while(1){
		int k;
		scanf("%d",&k);
		if(k==0){
			break;
		}
		scanf("%s",s);
		scanf("%s",r);
		int l1=strlen(s),l2=strlen(r);
		//cout<<s1<<" "<<s2;
		memset(lcs,0,sizeof(lcs));
		for(int i=1;i<l1+1;i++){
			for(int j=1;j<l2+1;j++){
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
				seg[i][j]=0;
				if(s[i-1]==r[j-1]){
					seg[i][j]=seg[i-1][j-1]+1;
					if(seg[i][j]>=k){
						for(int x=k;x<seg[i][j]+1;x++){
							lcs[i][j]=max(lcs[i][j],lcs[i-x][j-x]+x);
						}
					}
				}
			}
		}
		printf("%d\n",lcs[l1][l2]);
	}
	return 0;
}