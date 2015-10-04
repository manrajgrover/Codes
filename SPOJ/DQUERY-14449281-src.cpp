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
#define b 555
int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

int a[30005],res[200005],ans=0,c[1000005];

struct node{
	int l,r,in;
}x[200005];

bool comp(node p, node q){
	if((p.l/b)!=(q.l/b)){
		return (p.l/b)<(q.l/b);
	}
	return p.r<q.r;
}

int add(int p){
	c[a[p]]++;
	if(c[a[p]]==1){
		ans++;
	}
}

int rem(int p){
	c[a[p]]--;
	if(c[a[p]]==0){
		ans--;
	}
}

int main() {
	int n;
	memset(c,0,sizeof(c));
	n=read_i();
	for(int i=0;i<n;i++){
		a[i]=read_i();
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		x[i].l=read_i();
		x[i].r=read_i();
		x[i].l--;
		x[i].r--;
		x[i].in=i;
	}
	sort(x,x+m,comp);
	int cl=0,cr=0;
	for(int i=0;i<m;i++){
		int l=x[i].l,r=x[i].r;
		while(cl<l){
			rem(cl);
			cl++;
		}
		while(cl>l){
			add(cl-1);
			cl--;
		}
		while(cr<=r){
			add(cr);
			cr++;
		}
		while(cr>(r+1)){
			rem(cr-1);
			cr--;
		}
		res[x[i].in]=ans;
	}
	for(int i=0;i<m;i++){
		printf("%d\n",res[i]);
	}
	return 0;
}