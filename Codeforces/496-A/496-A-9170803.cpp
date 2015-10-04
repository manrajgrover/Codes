#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a[105];
	vector<bool> v(105,false);
	vector<int> b;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(n==3){
		printf("%d\n",a[2]-a[0]);
	}
	else{
		for(int i=0;i<n-2;i++){
			v[i+1]=true;
			int max=0;
			for(int j=1;j<n;j++){
				if(v[j]){
					if(a[j+1]-a[j-1]>max){
						max=a[j+1]-a[j-1];
					}
					j++;
				}
				else if(a[j]-a[j-1]>max){
					max=a[j]-a[j-1];
				}
			}
			v[i+1]=false;
			b.push_back(max);
		}
		int min=*min_element(b.begin(),b.end());
		printf("%d\n",min);
	}
	return 0;
}