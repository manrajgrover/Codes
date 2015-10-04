#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Point {
	ll x, y, index;
	bool operator <(const Point &other) const {
		if (y != other.y) return y < other.y;
		if (x != other.x) return x < other.x;
		return index < other.index;
	}
};

ll cross(const Point &o, const Point &a, const Point &b) {
	return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x);
}

Point p[100010],h[200010];

int main() {
	ll t,n,ti;
	double len,dx,dy;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		for(ll i=0;i<n;i++){
			scanf("%lld%lld",&p[i].x,&p[i].y);
			p[i].index=i+1;
		}
		sort(p,p+n);
		ll k=1;
		for(ll i=1;i<n;i++){
			if(p[i].x!=p[i-1].x||p[i].y!=p[i-1].y){
				p[k]=p[i];
				k++;
			}
		}
		n=k;
		k=0;
		for(ll i=0;i<n;i++){
			while(k>=2&&cross(h[k-2],h[k-1],p[i])<=0){
				k--;
			}
			h[k++]=p[i];
		}
		ti=k+1;
		for(ll i=n-1;i>=0;i--){
			while(k>=ti&&cross(h[k-2],h[k-1],p[i])<=0){
				k--;
			}
			h[k++]=p[i];
		}
		k--;
		len=0;
		for(ll i=0;i<k;i++){
			dx=h[i].x-h[i+1].x;
			dy=h[i].y-h[i+1].y;
			//cout<<h[i].x<<" "<<h[i].y<<" "<<h[i+1].x<<" "<<h[i+1].y<<endl;
			len+=sqrt(dx*dx+dy*dy);
		}
		printf("%.2f\n",len);
		for(ll i=0;i<k;i++){
			printf("%lld ",h[i].index);
		}
		printf("\n\n");
	}
	return 0;
}