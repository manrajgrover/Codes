#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fa(i,end,inc) for(ll i=0;i<end;i=i+inc)
#define fd(i,end,dec) for(ll i=end-1;i>=0;i=i-dec)
#define fa1(i,end,inc) for(ll i=1;i<=end;i=i+inc)


ll a[505][505],maxb[505][505],b[505][505],maxy[505][505],dpb[505][505],dpy[505][505];

int main() {
	ll n,m,x;
	while(1){
		scanf("%lld%lld",&n,&m);
		if(n==0&&m==0){
			break;
		}
		fa(i,n,1){
			fa(j,m,1){
				scanf("%lld",&a[i][j]);
			}
		}
		fa(i,n,1){
			fa(j,m,1){
				scanf("%lld",&b[i][j]);
			}
		}
		fa(i,n,1){
			dpb[i][0]=maxy[i][0]=0;
		}
		fa(i,m,1){
			dpy[n][i]=maxb[n][i]=0;
		}
		fd(i,m,1){
			fd(j,n,1){
				dpy[i][j]=dpy[i+1][j]+a[i][j];
			}
		}
		fd(i,n,1){
			fd(j,m,1){
				dpb[i][j]=dpb[i][j+1]+b[i][j];
			}
		}
		fd(i,n,1){
			fd(j,m,1){
				maxy[i][j]=dpy[i][j]+max(maxy[i][j+1],maxb[i][j+1]);
				maxb[i][j]=dpb[i][j]+max(maxy[i+1][j],maxb[i+1][j]);
			}
		}
		printf("%lld\n",max(maxy[0][0],maxb[0][0]));
	}
	return 0;
}