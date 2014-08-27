#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	vector<int> v;
	int n,x;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int flag=1,i=1,j=1,ctr=1;
	while(flag==1){
		if(v[n/2+i]==v[n/2]){
			ctr++;
			i++;
		}
		else if (v[n/2-j] == v[n/2]){
			ctr++;
			j++;
		}
		else {
			flag=0;
		}
	}
	if(ctr>n/2){
		cout<< "Major found:" << v[n/2] << endl;
	}
	else{
		cout << "No major"<< endl;
	}
	return 0;
}