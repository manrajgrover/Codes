//By manrajsingh
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a;
char o,s[40];

bool isnum(){
	a = 0;
	if(s[0]<'0'||s[0]>'9'){
		o=s[0];
		return false;
	}
	for(int i=0;s[i];i++){
		a=a*10+(s[i]-'0');
	}
	return true;
}

int main(){
	ll t;
	scanf("%lld",&t);
	while(t--) {
		ll res=0;
		a=0;
		o='+';
		while(scanf("%s",s)==1){
			//cout<<s<<" "<<endl;
			if(isnum()){
				//cout<<"num is "<<a<<" op is "<<o<<"res is "<<res<<endl;
				switch(o){
				case '+':
					res+=a;
					//cout<<"res is "<<endl;
					break;
				case '-':
					res-=a;
          			break;
        		case '*':
          			res*=a;
          			break;
        		case '/':
          			res/=a;
        			break;
    	 		}
			}
    	 	else if(o=='='){
    	 		printf("%lld\n",res);
    	 		break;
    	 	}
		}
  	}
  	return 0;
}