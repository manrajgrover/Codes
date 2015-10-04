#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fa(i,end,inc) for(ll i=0;i<end;i=i+inc)
#define fd(i,end,dec) for(ll i=end;i>=1;i=i-dec)
#define fa1(i,end,inc) for(ll i=1;i<=end;i=i+inc)


ll a[505][505],maxb[505][505],b[505][505],maxy[505][505],dpb[505][505],dpy[505][505];

int main() {
	ll n,m,x;
	while(1){
		scanf("%lld%lld",&n,&m);
		if(n==0&&m==0){
			break;
		}
		fd(i,n,1){
			fd(j,m,1){
				scanf("%lld",&a[i][j]);
			}
		}
		fd(i,n,1){
			fd(j,m,1){
				scanf("%lld",&b[i][j]);
			}
		}
		fa(i,n,1){
			dpb[i][0]=maxy[i][0]=0;
		}
		fa(i,m,1){
			dpy[0][i]=maxb[0][i]=0;
		}
		fa1(i,m,1){
			fa1(j,n,1){
				dpy[i][j]=dpy[i-1][j]+a[i][j];
			}
		}
		fa1(i,n,1){
			fa1(j,m,1){
				dpb[i][j]=dpb[i][j-1]+b[i][j];
			}
		}
		fa1(i,n,1){
			fa1(j,m,1){
				maxy[i][j]=dpy[i][j]+max(maxy[i][j-1],maxb[i][j-1]);
				maxb[i][j]=dpb[i][j]+max(maxy[i-1][j],maxb[i-1][j]);
			}
		}
		cout<<max(maxy[n][m],maxb[n][m])<<endl;
	}
	return 0;
}