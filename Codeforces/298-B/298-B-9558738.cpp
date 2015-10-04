#include <bits/stdc++.h>
using namespace std;
#define ll long long

char s[100005];

int main() {
	ios::sync_with_stdio(0);
	ll sy,sx,ex,ey,t;
	cin>>t>>sx>>sy>>ex>>ey;
	cin>>s;
	ll time,new_x,new_y,cur_x=sx,cur_y=sy;
	int found=0;
	for(ll i=0;i<t;i++){
		if(s[i]=='S'){
			new_x=cur_x;
			new_y=cur_y-1;
			if((llabs(ex-cur_x)*llabs(ex-cur_x)+llabs(ey-cur_y)*llabs(ey-cur_y))>(llabs(ex-new_x)*llabs(ex-new_x)+llabs(ey-new_y)*llabs(ey-new_y))){
				cur_x=new_x;
				cur_y=new_y;
			}
		}
		else if(s[i]=='E'){
			new_x=cur_x+1;
			new_y=cur_y;
			if((llabs(ex-cur_x)*llabs(ex-cur_x)+llabs(ey-cur_y)*llabs(ey-cur_y))>(llabs(ex-new_x)*llabs(ex-new_x)+llabs(ey-new_y)*llabs(ey-new_y))){
				cur_x=new_x;
				cur_y=new_y;
			}
		}
		else if(s[i]=='N'){
			new_x=cur_x;
			new_y=cur_y+1;
			if((llabs(ex-cur_x)*llabs(ex-cur_x)+llabs(ey-cur_y)*llabs(ey-cur_y))>(llabs(ex-new_x)*llabs(ex-new_x)+llabs(ey-new_y)*llabs(ey-new_y))){
				cur_x=new_x;
				cur_y=new_y;
			}
		}
		else if(s[i]=='W'){
			new_x=cur_x-1;
			new_y=cur_y;
			if((llabs(ex-cur_x)*llabs(ex-cur_x)+llabs(ey-cur_y)*llabs(ey-cur_y))>(llabs(ex-new_x)*llabs(ex-new_x)+llabs(ey-new_y)*llabs(ey-new_y))){
				cur_x=new_x;
				cur_y=new_y;
			}
		}
		if(cur_x==ex&&cur_y==ey){
			found=1;
			time=i+1;
			break;
		}
	}
	if(found==1){
		cout<<time<<'\n';
	}
	else{
		cout<<"-1\n";
	}
	return 0;
}