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
int read_i(){int n=0;int ch=gc();int sign=1;while(ch<'0'||ch>'9'){if(ch=='-'){sign=-1;}ch=gc();}while(ch>='0'&&ch<='9'){n=(n<<3)+(n<<1)+ch-'0';ch=gc();}n*=sign;return n;}
int a[4004],b[4004],c[4004],d[4004];

int main(){
	int n,w,x,y,z;
	n=read_i();
	int nsq=n*n;
	for(int i=0;i<n;i++){
		w=read_i();
		x=read_i();
		y=read_i();
		z=read_i();
		a[i]=w;b[i]=x;c[i]=y;d[i]=z;
		//cout<<w<<" "<<x<<" "<<y<<" "<<z<<"\n";
	}
	int *left= new int[4000*4000],*right=new int[4000*4000];
	for(int i=0;i<n;i++){
		int nx=n*i;
		for(int j=0;j<n;j++){
			left[j+nx]=a[i]+b[j];
			right[j+nx]=-c[i]-d[j];
		}
	}
	int ctr=0,i=0,j=0;
	sort(left,left+nsq);
	sort(right,right+nsq);
	while(i<nsq&&j<nsq){
		while(i<nsq&&j<nsq&&left[i]!=right[j]){
			if(left[i]<right[j]){
				i++;
			}
			else{
				j++;
			}
		}
		if(i==nsq||j==nsq){
			break;
		}
		int c1=0,f1=left[i];
		while(i<nsq&&left[i]==f1){
			c1++;i++;
		}
		int c2=0;
		while(j<nsq&&right[j]==f1){
			c2++;j++;
		}
		ctr+=(c1*c2);
	}
	printf("%d\n",ctr);
	return 0;
}
