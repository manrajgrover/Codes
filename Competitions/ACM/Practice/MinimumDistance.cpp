#include <stdio.h>
 
int main() {
	int t, ds, dt, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d%d", &ds, &dt, &d);
		double r;
		if(d>=ds+dt) r=d-ds-dt;
		else if(ds>=d+dt) r=ds-d-dt;
		else r=dt-d-ds;
		if(r<0) r=0;
		printf("%.8lf\n", r);
	}
	return 0;
} 