#include <bits/stdc++.h>
using namespace std;

/*
	This solution is O(Till_Find) in best and O(N) in time complexity in worst case where N is
	number of input characters. It takes O(1) space complexity.
*/

int main() {
	int c=1,prev,next,pos=1,f=0;
	char x,y;
	x=getchar();
	prev=x-'0';
	while(1){
		if(c==5){
			f=1;
			break;
		}
		y=getchar();
		if(y==EOF){
			break;
		}
		next=y-'0';
		pos++;
		if((prev+1)==next){
			c++;
		}
		else{
			c=1;
		}
		prev=next;
	}
	if(f==1){
		cout<<"Found at "<<pos-5<<endl;
	}
	else{
		cout<<"Not found."<<endl;
	}
	return 0;
}