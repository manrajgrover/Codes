#include <bits/stdc++.h>
using namespace std;

int lps[100005];

void compute_lps(string p) {
	lps[0] = 0,lps[1] = 0;
	int c= 0, m=p.length();
	for (int j = 2; j<m; j++) {
		while (c!= 0 && p[c] != p[j - 1]) {
			c= lps[c];
		}
		if (p[c] == p[j - 1]) {
			c= c+ 1;
		}
		lps[j] = c;
	}
	int len=m-lps[m - 1] - 1;
	if (m == 1) {
		printf("1\n");
	} 
	else if(len!=1&&m%len== 0) {
		int ans=m/len;
		printf("%d\n",ans);
	} else if ((len == 1 && p[0] == p[m-1])) {
		printf("%d\n",m);
	} else {
		printf("1\n");
	}
}

int main() {
	string s;
	while (1) {
		cin >> s;
		if (s == "*") {
			break;
		}
		compute_lps(s);
	}
	return 0;
}