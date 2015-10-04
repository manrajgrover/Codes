#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define pc(x) putchar_unlocked(x)
#define debug(x){cout<<#x<<" = "<<x<< endl;}
//int read_i(){char c=gc();while(c<'0' || c>'9'){c = gc();}int ret = 0;while(c>='0' && c<='9'){ret=10*ret+c-48;c=gc();}return ret;}

vector<string> v;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string x;
	for(int i=0;i<8;i++){
		cin>>x;
		v.push_back(x);
	}
	ll b=0,w=0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(v[i][j]=='.'){
				continue;
			}
			else if(v[i][j]=='Q'){
				w+=9;
			}
			else if(v[i][j]=='R'){
				w+=5;
			}
			else if(v[i][j]=='B'){
				w+=3;
			}
			else if(v[i][j]=='N'){
				w+=3;
			}
			else if(v[i][j]=='P'){
				w+=1;
			}
			else if(v[i][j]=='K'){
				continue;
			}
			else if(v[i][j]=='q'){
				b+=9;
			}
			else if(v[i][j]=='r'){
				b+=5;
			}
			else if(v[i][j]=='b'){
				b+=3;
			}
			else if(v[i][j]=='n'){
				b+=3;
			}
			else if(v[i][j]=='p'){
				b+=1;
			}
			else if(v[i][j]=='k'){
				continue;
			}
		}
	}
	if(w>b){
		cout<<"White\n";
	}
	else if(b>w){
		cout<<"Black\n";
	}
	else{
		cout<<"Draw\n";
	}
	return 0;
}